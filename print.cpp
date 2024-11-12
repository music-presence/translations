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
            if (!a.github_name.empty() && !b.github_name.empty()) {
                auto x = std::tolower(a.github_name.front());
                auto y = std::tolower(b.github_name.front());
                if (x < y) return true;
                if (y < x) return false;
            }
            return a.github_name < b.github_name;
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
        std::cout << "| [@" << c.github_name <<  "]"
            "(https://github.com/" << c.github_name << ") | "
            << oss.str() << " |" << std::endl;
    }
    return 0;
}
