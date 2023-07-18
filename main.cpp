#include <iostream>
#include <algorithm>
#include <memory>
#include "TrioPath.hpp"


std::string strIsEmpty(bool is_true) {
    if(is_true) {
        return "Evet";
    } else {
        return "Hayır";
    }
}
std::string strIsFull(bool is_true) {
    if(is_true) {
        return "Hayır";
    } else {
        return "Evet";
    }
}

int main() {


    std::cout << "Bir path giriniz : ";
    std::string newPath = "/trio/bin/trueai.exe";
    std::getline(std::cin, newPath);

    Trio::TrioPath path(newPath);

    std::cout << "Path boş mu ? : " << strIsEmpty(path.is_empty()) << std::endl
            << "Branch path mevcut mu ? : " << strIsFull(path.branch_path().is_empty()) << std::endl
            << "Branch path : " << path.branch_path().string() << std::endl
            << "Root path : " << path.root_directory().string() << std::endl
            << "Filename mevcut mu ? : " << strIsEmpty(path.has_filename()) << std::endl
            << "Filename : " << path.filename().string() << std::endl
            << "Extension mevcut mu ? : " << strIsFull(path.extension().is_empty()) << std::endl
            << "Extension : " << path.extension().string() << std::endl
            << "Uzantısız dosya adı : " << path.stem().string() << std::endl
            << "Karakter uzunluğu : " << path.size() << std::endl;


    std::string newExtension;
    std::cout << "Uzantıyı ne ile değiştirmek istersiniz : ";
    std::cin >> newExtension;

    path.replace_extension(newExtension);

    std::cout << "Yeni filename : " << path.filename().string();

    return 0;
}
