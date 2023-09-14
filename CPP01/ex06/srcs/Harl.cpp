#include "../includes/Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::complain( std::string level )
{
    std::string message[4];
    void (Harl::*tableauDeFonctions[4])(void);
    message[0] = "DEBUG";
    message[1] = "INFO";
    message[2] = "WARNING";
    message[3] = "ERROR";
    tableauDeFonctions[0] = &Harl::debug;
    tableauDeFonctions[1] = &Harl::info;
    tableauDeFonctions[2] = &Harl::warning;
    tableauDeFonctions[3] = &Harl::error;
    for (int i = 0; i <= 3; i++)
    {
        if (level == message[i])
        {
            while (i <= 3)
                (this->*tableauDeFonctions[i++])();
        }
        
    }
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}