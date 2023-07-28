#include "TrioPath.hpp"
#include <iostream>
#include <string>
#include <algorithm>

Trio::TrioPath Trio::TrioPath::branch_path()
{
    std::string branchPath;
    if(path.find_last_of('/') != -1)
    {
        branchPath = path.substr(0, path.find_last_of('/'));
        return branchPath;
    }
    else
        return branchPath;
}

Trio::TrioPath Trio::TrioPath::root_directory()
{
    std::string rootPath;
    rootPath = path.substr(0 ,path.find_first_of('/') + 1);
    return rootPath;
}

Trio::TrioPath Trio::TrioPath::extension() {
    std::string currentExtension;
    if (path.find_last_of('.') != -1)
    {
        currentExtension = path.substr(path.find_last_of('.'), path.back());
        return currentExtension;
    }
    else
        return currentExtension;
}


bool Trio::TrioPath::has_extension()
{
    if(path.find_last_of('.'))
    {
        return true;
    }
    return false;
}

bool Trio::TrioPath::is_empty()
{
    if(path.empty()) {
        return true;
    } else {
        return false;
    }
}

Trio::TrioPath Trio::TrioPath::filename()
{
    std::string fileName = path.substr(path.find_last_of('/') + 1, path.back());
    return fileName;
}

bool Trio::TrioPath::has_filename()
{
    if(filename().string() != "")
        return true;
    else
        return false;
}

Trio::TrioPath Trio::TrioPath::stem()
{
    std::string fileStem = filename().string().substr(0, filename().string().find_last_of('.'));
    return fileStem;
}

std::string Trio::TrioPath::string()
{
    return path;
}

size_t Trio::TrioPath::size()
{
    return path.length();
}

void Trio::TrioPath::replace_extension(std::string newExtension)
{
    auto it = std::find(path.cbegin(), path.cend(), '.');
    if(it == path.cend()) {
        path += "." + newExtension;
    } else {
        path.erase(it, path.end());
        path += newExtension;
    }
}
