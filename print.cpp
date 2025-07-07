#include "translations/info.h"

#include <algorithm>
#include <iostream>
#include <sstream>

#define WEBLATE_BASE_URL "https://translate.codeberg.org/projects/music-presence/desktop-application"

int main()
{
    auto contributors = translations::contributors();
    std::sort(contributors.begin(), contributors.end(),
        [](auto const& a, auto const& b) {
            const std::string an = a.github_name.value_or(a.name);
            const std::string bn = b.github_name.value_or(b.name);
            if (!an.empty() && !bn.empty()) {
                auto x = std::tolower(an.front());
                auto y = std::tolower(bn.front());
                if (x < y) return true;
                if (y < x) return false;
            }
            return an < bn;
        });

    // Markdown output
    std::cout << "| Username | Languages |" << std::endl;
    std::cout << "|:-|:-|" << std::endl;
    for (auto const& c : contributors) {
        std::ostringstream oss;
        for (size_t i = 0; i < c.translated_languages.size(); i++) {
            auto code = c.translated_languages[i];
            oss << "[" << code << "](" WEBLATE_BASE_URL "/" << code << ")";
            if (i != c.translated_languages.size() - 1) {
                oss << ", ";
            }
        }
        if (c.github_name.has_value()) {
            std::cout << "| [@" << *c.github_name <<  "]"
                "(https://github.com/" << *c.github_name << ") | "
                << oss.str() << " |" << std::endl;
        } else {
            std::cout << "| " << c.name << " | "
                << oss.str() << " |" << std::endl;
        }
    }
    return 0;
}
