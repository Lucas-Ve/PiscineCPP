#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
    this->_error = 0;
    int i = 0;
	std::ifstream file("./data.csv");
	if (!file.is_open())
	{
        this->_error = 1;
		return;
	}
	std::string line;
	while(std::getline(file, line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
		size_t pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cerr << "Error : Invalid Paramter" << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
        try 
        {
            double value = std::atof(line.substr(pos + 1).c_str());
            this->data.insert(std::make_pair(date, value));
        } 
        catch (...) 
        {
            std::cerr << "Error: could not parse value : " << line.substr(pos + 1) << std::endl;
            continue;
        }
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    this->data = rhs.data;
    return (*this);
}

int BitcoinExchange::getError(void) const
{
    return (this->_error);
}

bool BitcoinExchange::verifDate(void)
{
    ft_trim(this->_dateInput);
    if ((this->_dateInput.length() != 10 || this->_dateInput.find_first_not_of("0123456789") != 4 || this->_dateInput[4] != '-'
    || this->_dateInput[7] != '-' || this->_dateInput.find_last_not_of("0123456789") != 7))
        return false;
    else
    {
        int years;
        int months;
        int days;

        years = atoi(this->_dateInput.substr(0, 4).c_str());
        months = atoi(this->_dateInput.substr(5, 2).c_str());
        days = atoi(this->_dateInput.substr(8, 2).c_str());
        if (years < 0 || years > 2023 || months < 1 || months > 12 || days < 1 || days > 31)
            return false;
        else if ((months == 4 || months == 6 || months == 9 || months == 11) && days > 30)
            return false;
        // Vérifier le mois de février.
        else if (months == 2)
        {
            // Vérifier si c'est une année bissextile (29 jours) ou non (28 jours).
            if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0))
            {
                if (days > 29)
                    return false;
            }
            else
            {
                if (days > 28)
                    return false;
            }
        }
    }
    return true;
}

bool BitcoinExchange::verifValue(void)
{
    if (this->_doubleValueInput < 0)
    {
		std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
	else if (this->_doubleValueInput > 1000)
    {
		std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::verifInput(void)
{
    if (!verifDate())
    {
        std::cout << "Error: Invalid date format in line => " << this->_line << std::endl;
        return;
    }
    if (!verifValue())
        return;
    if (!findBtc())
        return;
}

bool BitcoinExchange::findBtc(void)
{
    if (this->data.empty())
        return false;
    std::map<std::string, double>::iterator it = this->data.upper_bound(this->_dateInput);
		if (it != this->data.end())
	        this->_btcPrice = *(--it);
    std::cout << this->_dateInput << " => " << this->_doubleValueInput << " = " << this->_doubleValueInput * this->_btcPrice.second << std::endl;
    return true;
}

void BitcoinExchange::execInput(std::string const inputPath)
{
    int i = 0;
    std::ifstream file(inputPath.c_str());
    if (!file.is_open())
    {
        this->_error = 1;
        return;
    }
    while(std::getline(file, this->_line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
        size_t posPipe = this->_line.find('|');
        if (posPipe == std::string::npos)
        {
            std::cout << "Error: bad input => " << this->_line << std::endl;
			continue;
        }
        else
        {
            this->_dateInput = this->_line.substr(0, posPipe);
            this->_valueInput = this->_line.substr(posPipe + 1);
            this->_doubleValueInput = std::atof(this->_valueInput.c_str());
            if (this->_doubleValueInput == 0)
            {
                std::cout << "Error: bad input => " << this->_line << std::endl;
                continue;
            }
            verifInput();
        }
    }
}

void ft_trim(std::string &str)
{
    size_t start = 0;
    size_t end = str.length() - 1;

    while (start <= end && std::isspace(str[start]))
        start++;
    while (end >= start && std::isspace(str[end]))
        end--;
    str = str.substr(start, end - start + 1);
}