#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::string out_file;
    if (argc == 4)
    {
        out_file = argv[1];
        out_file.insert(out_file.length(), ".replace");
        std::cout << out_file << std::endl;
        std::ifstream ifs(argv[1]);
        std::ofstream ofs(out_file);
        ifs.close();
        ofs.close();
    }
    return (0);
}