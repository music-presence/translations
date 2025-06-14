
#!/bin/bash

FROM_COMMIT=$1
TO_COMMIT=$2
TRANSLATION_ONLY=${3:-0}

[ $# -lt 2 ] || [ $# -gt 3 ] && { echo "Usage: $0 FROM_COMMIT TO_COMMIT [TRANSLATION_ONLY]"; exit 1; }

if [ "$TRANSLATION_ONLY" == "1" ]; then
  TRANSLATION_ONLY=1
elif [ "$TRANSLATION_ONLY" == "0" ]; then
  TRANSLATION_ONLY=0
else
  echo "Error: TRANSLATION_ONLY must be either 1 or 0."
  exit 1
fi

copy_to_clipboard() {
  if command -v pbcopy &>/dev/null; then
    pbcopy
  elif command -v xclip &>/dev/null; then
    xclip -selection clipboard
  elif command -v clip.exe &>/dev/null; then
    iconv -f UTF-8 -t UTF-16LE | clip.exe
  else
    echo "No clipboard utility found (pbcopy, xclip, or clip.exe)"
    return 1
  fi
}

OUTPUT_DIR="verify"
[ -n "$OUTPUT_DIR" ] && [ -d "$OUTPUT_DIR" ] && rm -rf "$OUTPUT_DIR"
mkdir -p "$OUTPUT_DIR"

for file in musicpresence_*.ts; do
    output=$(./verify.sh "$FROM_COMMIT" "$TO_COMMIT" "$file" "$TRANSLATION_ONLY") || { echo "verify.sh failed on $file"; exit 1; }
    output_file="$OUTPUT_DIR/$file.html"
    echo -e "<meta charset="UTF-8">\n<style>div{font-family:sans-serif;}</style>\n\n$output" > "$output_file"
    echo "Created $output_file"

#   echo
#   echo "---"
#   echo
#   output=$(./verify.sh "$FROM_COMMIT" "$TO_COMMIT" "$file" "$TRANSLATION_ONLY") || { echo "verify.sh failed on $file"; exit 1; }
#   echo "$output"
#   echo
#   echo "---"
#   echo
#   echo "These are translations for file $file"
#   echo "After verifying continue with Enter or abort with any other key"
#   echo "You can copy the output to your clipboard by pressing P"
#   read -rsn1 input
#   case "$input" in
#     [Pp])
#       echo "$output" | copy_to_clipboard && echo "Output copied to clipboard." || echo "Failed to copy output."
#       read -rsn1 next_input
#       [[ $next_input == "" ]] || exit 0
#       ;;
#     "")
#       ;;
#     *)
#       exit 0
#       ;;
#   esac
done

trap '[ -d "$OUTPUT_DIR" ] && rm -rf "$OUTPUT_DIR"' EXIT

echo "Serving verification output"
python -m http.server -d verify -b 127.0.0.1
