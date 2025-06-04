#include <translations/info.h>

#include <string>

using namespace translations;

std::vector<std::string> const& translations::languages()
{
    // List of all translations that are ready to be used in production.
    // These must have all or almost all strings translated.
    // There must be a "CMAKE" comment before each language for extraction.
    static std::vector<std::string> codes = {
        /* CMAKE */ "en",
        /* CMAKE */ "de",
        /* CMAKE */ "af",
        /* CMAKE */ "zh-TW",
        /* CMAKE */ "hr",
        /* CMAKE */ "nl",
        /* CMAKE */ "id",
        /* CMAKE */ "it",
        /* CMAKE */ "pl",
        /* CMAKE */ "es",
        /* CMAKE */ "fr",
        /* CMAKE */ "ko",
        /* CMAKE */ "ru",
        /* CMAKE */ "uk",
        /* CMAKE */ "ja",
        /* CMAKE */ "sk",
        /* CMAKE */ "vi",
        /* CMAKE */ "hu",
        /* CMAKE */ "fi",
        /* CMAKE */ "ro",
        /* CMAKE */ "cs",
        /* CMAKE */ "ar",
    };
    return codes;
}

std::vector<Contributor> const& translations::contributors()
{
    // People that have contributed majorily to translations.
    // The list of codes must contain one or more codes from the above list.
    static std::vector<Contributor> contributors = {
        {
            .name = "Jonas van den Berg",
            .github_name = "ungive",
            .codeberg_name = "ungive",
            .link_to_github = true,
            .translated_languages = {"de"},
        },
        {
            .name = "VNCE",
            .github_name = "VZCE",
            .codeberg_name = "VNCE",
            .link_to_github = true,
            .translated_languages = {"fr"},
        },
        {
            .name = "moe",
            .github_name = "thijmi",
            .codeberg_name = "moeshpit",
            .link_to_github = true,
            .translated_languages = {"af", "ko", "ja", "nl"},
        },
        {
            .name = "oscar",
            .github_name = "scar1jpg",
            .codeberg_name = "scar1jpg",
            .link_to_github = false,
            .translated_languages = {"pl"},
        },
        {
            .name = "Mozoa",
            .github_name = "mozoarella",
            .codeberg_name = "mozoa",
            .link_to_github = true,
            .translated_languages = {"nl"},
        },
        {
            .name = "Moon Man",
            .github_name = "MoonManPL",
            .codeberg_name = "MoonManPL",
            .link_to_github = true,
            .translated_languages = {"pl"},
        },
        {
            .name = "Snyri",
            .github_name = "Snyri",
            .codeberg_name = "Snyri",
            .link_to_github = true,
            .translated_languages = {"it"},
        },
        {
            .name = "Marvelous Adiris",
            .github_name = "MarvelousAdiris",
            .codeberg_name = "MarvelousAdiris",
            .link_to_github = true,
            .translated_languages = {"es"},
        },
        {
            .name = "Lieba Natur Brilian",
            .github_name = "naturbrilian",
            .codeberg_name = "naturbrilian",
            .link_to_github = true,
            .translated_languages = {"id"},
        },
        {
            .name = "Matej",
            .github_name = "matej4real",
            .codeberg_name = "matej4real",
            .link_to_github = true,
            .translated_languages = {"hr", "bs", "sr"},
        },
        {
            .name = "h1hs",
            .github_name = "ayovu",
            .codeberg_name = "Ayovu",
            .link_to_github = true,
            .translated_languages = {"ru", "uk"},
        },
        {
            .name = "FamilyMink5",
            .github_name = "FamilyMink5",
            .codeberg_name = "FamilyMink5",
            .link_to_github = true,
            .translated_languages = {"ko"},
        },
        {
            .name = "jmleetw",
            .github_name = "jmleetw",
            .codeberg_name = "jmleetw",
            .link_to_github = true,
            .translated_languages = {"zh-TW"},
        },
        {
            .name = "heartached",
            .github_name = "heartached",
            .codeberg_name = "heartachedd",
            .link_to_github = true,
            .translated_languages = {"es"},
        },
        {
            .name = "momizi06",
            .github_name = "momizi06",
            .codeberg_name = "momizi06",
            .link_to_github = true,
            .translated_languages = {"ja"},
        },
        {
            .name = "longnuub",
            .github_name = "coderheck",
            .codeberg_name = "longnuub",
            .link_to_github = true,
            .translated_languages = {"vi"},
        },
        {
            .name = "Tibor Stegmann",
            .github_name = "stegmann-tibor",
            .codeberg_name = "cheezton",
            .link_to_github = true,
            .translated_languages = {"sk"},
        },
        {
            .name = "cobra525",
            .github_name = "cobra525",
            .codeberg_name = "cobra525",
            .link_to_github = false,
            .translated_languages = {"hu"},
        },
        {
            .name = "ekimeister",
            .github_name = "ekimeister",
            .codeberg_name = "ekimeister",
            .link_to_github = true,
            .translated_languages = {"fi"},
        },
        {
            .name = "Liviu",
            .github_name = "liviu-hariton",
            .codeberg_name = "liviu-hariton",
            .link_to_github = true,
            .translated_languages = {"ro"},
        },
        {
            .name = "Ondřej Kučera",
            .github_name = "kucendro",
            .codeberg_name = "kucendro",
            .link_to_github = true,
            .translated_languages = {"cs"},
        },
        {
            .name = "Mystic",
            .github_name = "Mysticnotthemighty",
            .codeberg_name = "Mysticnotthemighty",
            .link_to_github = true,
            .translated_languages = {"ar"},
        },
        {
            .name = "21mtd",
            .github_name = "21mtd",
            .codeberg_name = "21mtd",
            .link_to_github = true,
            .translated_languages = {"vi"},
        },
        {
            .name = "Stap",
            .github_name = "CluBstep77",
            .codeberg_name = "Stap",
            .link_to_github = false,
            .translated_languages = {"fr"},
        },
        {
            .name = "Pascal Tufariello",
            .github_name = "pascal-00",
            .codeberg_name = "pascal0",
            .link_to_github = true,
            .translated_languages = {"it"},
        },
    };
    return contributors;
}
