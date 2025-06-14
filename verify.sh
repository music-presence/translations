#!/bin/bash

FROM_COMMIT=$1
TO_COMMIT=$2
TRANSLATION_FILE=$3
TRANSLATION_ONLY_=$4

[ $# -lt 3 ] || [ $# -gt 4 ] && echo "Usage: $0 FROM_COMMIT TO_COMMIT TRANSLATION_FILE [TRANSLATION_ONLY]" && exit 1
git rev-parse --verify "${FROM_COMMIT}^{commit}" >/dev/null || { echo "Invalid FROM_COMMIT"; exit 1; }
git rev-parse --verify "${TO_COMMIT}^{commit}" >/dev/null || { echo "Invalid TO_COMMIT"; exit 1; }
[ -f "${TRANSLATION_FILE}" ] || { echo "Translation file not found"; exit 1; }

if [ "$TRANSLATION_ONLY_" == "1" ]; then
  TRANSLATION_ONLY=1
elif [ "$TRANSLATION_ONLY_" == "0" ]; then
  TRANSLATION_ONLY=0
else
  echo "Error: TRANSLATION_ONLY must be either 1 or 0."
  exit 1
fi

CHANGED_TRANSLATIONS=$(\
  git diff --color=always "$FROM_COMMIT..$TO_COMMIT" -- "$TRANSLATION_FILE" \
  | grep -E '[+].*(<translation>|<translation type="unfinished">).*</translation>' -B 3)
# python3 -c "import sys, html; sys.stdin.reconfigure(encoding='utf-8'); sys.stdout.reconfigure(encoding='utf-8'); print(html.unescape(sys.stdin.read()), end='')"

RESULT=$(echo "$CHANGED_TRANSLATIONS" | awk -v TRANSLATION_ONLY="$TRANSLATION_ONLY" '
  /<source>/ {
    gsub(/.*<source>|<\/source>.*/, "")
    source = $0
  }
  /<translation/ {
    gsub(/.*<translation[^>]*>|<\/translation>.*/, "")
    translation = $0
    if (translation != "") {
      if (TRANSLATION_ONLY == "1") {
        print translation
        print ""
      } else {
        print "<pre translate=\"no\">" source "</pre>"
        print "<pre translate=\"no\" style=\"background-color: #eee\">" translation "</pre>"
        print "<div style=\"border: 1px solid black; padding: 10px;\">" translation "</div><br><br><br>"
        print ""
      }
    }
  }
')

echo "$RESULT"
