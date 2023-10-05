# ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

class BitcoinExchange
{
private:
    /* data */
public:
    BitcoinExchange(void);
    BitcoinExchange(BitcoinExchange const &src);
    ~BitcoinExchange();

    BitcoinExchange operator=(BitcoinExchange const &rhs);
};

#endif