#ifndef TRIOPATH_HPP
#define TRIOPATH_HPP

#include <iostream>

namespace Trio
{
    class TrioPath
    {
    private:
        std::string path;
    public:

        Trio::TrioPath branch_path();// filename'in üstündeki path

        bool is_empty(); // path içeriğinde bir directory yada filename var mı ?

        Trio::TrioPath root_directory();

        Trio::TrioPath extension(); // uzantı

        bool has_extension();// uzantısı var mı ?




        Trio::TrioPath filename();// path hariç dosya adı


        bool has_filename();// dosya adı var mı ?

        Trio::TrioPath stem();// uzantı ve path hariç dosya adı

        size_t size();// Path'in tüm karakter uzunluğu

        void replace_extension(std::string newExtension);// mevcut uzantıyı newExtension ile değiştiren fonksiyon.

        std::string string();// path'i string olarak döndürür.


        TrioPath(std::string newPath) : path{newPath}{}
        ~TrioPath() {}

    };
}

#endif //TRIOPATH_HPP
