#include "../includes/Harl.hpp"

int messagetoint(char *str)
{
    std::string message[4];
    message[0] = "DEBUG";
    message[1] = "INFO";
    message[2] = "WARNING";
    message[3] = "ERROR";
    for (int i = 0; i <= 3; i++)
    {
        if (message[i] == str)
            return (i);
    }
    return (-1);
}

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        Harl harl;
        switch (messagetoint(av[1]))
        {
        case 0:
            harl.complain("DEBUG");
            break;
        case 1:
            harl.complain("INFO");
            break;
        case 2:
            harl.complain("WARNING");
            break;
        case 3:
            harl.complain("ERROR");
            break;
        
        default:
            std::cout << "Wrong message !" << std::endl;
            break;
        }

    }
    else
        std::cout << "Wrong number of argument !" << std::endl;
    return (0);
}