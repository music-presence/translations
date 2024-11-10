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
    std::vector<std::string> translated_languages;
};

std::vector<std::string> const& languages();
std::vector<Contributor> const& contributors();

}
