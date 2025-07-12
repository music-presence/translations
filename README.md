# music-presence/translations

Translations for the [Music Presence](https://musicpresence.app) app.

## Contributors

| Username | Languages |
|:-|:-|
| [@21mtd](https://github.com/21mtd) | [vi](https://translate.codeberg.org/projects/music-presence/desktop-application/vi) |
| [@ayovu](https://github.com/ayovu) | [ru](https://translate.codeberg.org/projects/music-presence/desktop-application/ru), [uk](https://translate.codeberg.org/projects/music-presence/desktop-application/uk) |
| [@CluBstep77](https://github.com/CluBstep77) | [fr](https://translate.codeberg.org/projects/music-presence/desktop-application/fr) |
| [@caneabi](https://github.com/caneabi) | [tr](https://translate.codeberg.org/projects/music-presence/desktop-application/tr) |
| [@cobra525](https://github.com/cobra525) | [hu](https://translate.codeberg.org/projects/music-presence/desktop-application/hu) |
| [@coderheck](https://github.com/coderheck) | [vi](https://translate.codeberg.org/projects/music-presence/desktop-application/vi) |
| [@ekimeister](https://github.com/ekimeister) | [fi](https://translate.codeberg.org/projects/music-presence/desktop-application/fi) |
| [@FamilyMink5](https://github.com/FamilyMink5) | [ko](https://translate.codeberg.org/projects/music-presence/desktop-application/ko) |
| [@heartached](https://github.com/heartached) | [es](https://translate.codeberg.org/projects/music-presence/desktop-application/es) |
| [@jmleetw](https://github.com/jmleetw) | [zh-TW](https://translate.codeberg.org/projects/music-presence/desktop-application/zh-TW) |
| [@kucendro](https://github.com/kucendro) | [cs](https://translate.codeberg.org/projects/music-presence/desktop-application/cs) |
| [@liviu-hariton](https://github.com/liviu-hariton) | [ro](https://translate.codeberg.org/projects/music-presence/desktop-application/ro) |
| [@MenIDistrust](https://github.com/MenIDistrust) | [es](https://translate.codeberg.org/projects/music-presence/desktop-application/es) |
| [@MoonManPL](https://github.com/MoonManPL) | [pl](https://translate.codeberg.org/projects/music-presence/desktop-application/pl) |
| [@Mysticnotthemighty](https://github.com/Mysticnotthemighty) | [ar](https://translate.codeberg.org/projects/music-presence/desktop-application/ar) |
| [@matej4real](https://github.com/matej4real) | [hr](https://translate.codeberg.org/projects/music-presence/desktop-application/hr), [bs](https://translate.codeberg.org/projects/music-presence/desktop-application/bs), [sr](https://translate.codeberg.org/projects/music-presence/desktop-application/sr) |
| [@momizi06](https://github.com/momizi06) | [ja](https://translate.codeberg.org/projects/music-presence/desktop-application/ja) |
| [@mozoarella](https://github.com/mozoarella) | [nl](https://translate.codeberg.org/projects/music-presence/desktop-application/nl) |
| [@naturbrilian](https://github.com/naturbrilian) | [id](https://translate.codeberg.org/projects/music-presence/desktop-application/id) |
| [@pascal-00](https://github.com/pascal-00) | [it](https://translate.codeberg.org/projects/music-presence/desktop-application/it) |
| [@qadqod](https://github.com/qadqod) | [he](https://translate.codeberg.org/projects/music-presence/desktop-application/he) |
| [@Snyri](https://github.com/Snyri) | [it](https://translate.codeberg.org/projects/music-presence/desktop-application/it) |
| SoundBlaster1998 | [pt-PT](https://translate.codeberg.org/projects/music-presence/desktop-application/pt-PT) |
| [@scar1jpg](https://github.com/scar1jpg) | [pl](https://translate.codeberg.org/projects/music-presence/desktop-application/pl) |
| [@stegmann-tibor](https://github.com/stegmann-tibor) | [sk](https://translate.codeberg.org/projects/music-presence/desktop-application/sk) |
| [@thaiowl](https://github.com/thaiowl) | [be](https://translate.codeberg.org/projects/music-presence/desktop-application/be) |
| [@thijmi](https://github.com/thijmi) | [af](https://translate.codeberg.org/projects/music-presence/desktop-application/af), [ko](https://translate.codeberg.org/projects/music-presence/desktop-application/ko), [ja](https://translate.codeberg.org/projects/music-presence/desktop-application/ja), [nl](https://translate.codeberg.org/projects/music-presence/desktop-application/nl) |
| [@ungive](https://github.com/ungive) | [de](https://translate.codeberg.org/projects/music-presence/desktop-application/de) |
| [@VZCE](https://github.com/VZCE) | [fr](https://translate.codeberg.org/projects/music-presence/desktop-application/fr) |

Update this table by running this and copying the output:

```
$ g++ -o a.out print.cpp info.cpp -I include && ./a.out
```

## Verifying translations

Perform the following steps to verify translations from contributors:

- Commit and push the latest changes from Weblate
- Update your local clone of the repository: `git pull`
- Fetch the remote `verified` tag: `git fetch --tags`
- Run `./verify-all.sh verified COMMIT` where `COMMIT`
  is the specific commit until which you'd like to verify translations.
  You may use `HEAD` to reference the latest commit.
- Open your browser at http://localhost:8000 and click through the files.
  Use the translator embedded in your browser (e.g. Chrome)
  to automatically translate every translation back to English.
- Once you are done verifying all translations,
  move the `verified` tag to the commit until which you verified:
  `git tag -f verified COMMIT`.
  Then push the tag: `git push -f origin verified`

---

## License

MIT License  
See [LICENSE](./LICENSE) for details.
