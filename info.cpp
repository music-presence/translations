#include <translations/info.h>

#include <string>

using namespace translations;

std::vector<std::string> const& translations::country_language_codes()
{
    // List of all translations that are ready to be used in production.
    // These must have all or almost all strings translated.
    static std::vector<std::string> codes = {
        "de-DE",
        "af-ZA",
        "zh-TW",
        "hr-HR",
        "nl-NL",
        "id-ID",
        "it-IT",
        "pl-PL",
        "es-ES",
    };
    return codes;
}

std::vector<Contributor> const& translations::contributors()
{
    // People that have contributed majorily to translations.
    // The list of codes must contain one or more codes from the above list.
    static std::vector<Contributor> contributors = {
        {
            .name = "Matej",
            .github_name = "matej4real",
            .codeberg_name = "matej4real",
            .link_to_github = true,
            .country_language_codes = {"hr-HR"}
            .country_language_codes = {"ba-BA"}
            .country_language_codes = {"rs-RS"}
        },
    };
    return contributors;
}
