# ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <iostream>

class BitcoinExchange
{
private:
    std::map <std::string, float> data;
    int _error;
    std::string _dateInput;
    std::string _valueInput;
    std::string _line;
    double _doubleValueInput;
public:
    BitcoinExchange(void);
    BitcoinExchange(BitcoinExchange const &src);
    ~BitcoinExchange();

    BitcoinExchange &operator=(BitcoinExchange const &rhs);

    int getError(void) const;
    void execInput(std::string const inputPath);
    void verifInput(void);
    bool verifDate(void);
    bool verifValue(void);

};

void ft_trim(std::string &str);

#endif