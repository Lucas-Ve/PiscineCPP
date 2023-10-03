#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    std::string str;
    std::string s1;
    std::string s2;
    std::size_t pos;

    if (argc == 4 && argv[2][0] != '\0')
    {
        s1 = argv[2];
        s2 = argv[3];
        std::ifstream ifs(argv[1]);
        if (ifs.fail())
        {
            std::cout << "Error !" << std::endl;
            return (1);
        }
        std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
        while (std::getline(ifs, str))
        {
            pos = 0;
            while ((pos = str.find(s1, pos)) != std::string::npos)
            {
                str.erase(pos, s1.length());
                str.insert(pos, s2);
                pos += s2.length();
            }
            ofs << str;
            if (!ifs.eof())
                ofs << std::endl;
        }
        ifs.close();
        ofs.close();
    }
    else if (argv[2][0] == '\0')
        std::cout << "Second argument can't be empty." << std:: endl;
    else
        std::cout << "Wrong number of arguments !!" << std:: endl;
    return (0);
}