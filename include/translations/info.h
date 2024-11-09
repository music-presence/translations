#pragma once

#include <string>
#include <vector>

namespace translations
{

struct Contributor
{
    std::string name;
    std::string github_name;
    std::string codeberg_name;
    bool link_to_github{ false };
    std::vector<std::string> country_language_codes;
};

std::vector<std::string> const& country_language_codes();
std::vector<Contributor> const& contributors();

}
