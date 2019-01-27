#include <boost/filesystem.hpp>
#include <iostream>

int main(int argc, char** argv)
{
    boost::filesystem::path p("/home/sm/downloads/nixos-minimal-18.09.1819.76aafbf4bf4-x86_64-linux.iso");
    std::cout << p.extension() << '\n';
    return 0;
}