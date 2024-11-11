#include <translations/info.h>

#include <string>

using namespace translations;

std::vector<std::string> const& translations::languages()
{
    // List of all translations that are ready to be used in production.
    // These must have all or almost all strings translated.
    static std::vector<std::string> codes = {
        "en",
        "de",
        "af",
        "zh-TW",
        "hr",
        "nl",
        "id",
        "it",
        "pl",
        "es",
        "fr",
        "ko",
        "ru",
        "uk",
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
            .github_name = "moeshpit",
            .codeberg_name = "moeshpit",
            .link_to_github = true,
            .translated_languages = {"af", "ko"},
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
    };
    return contributors;
}
