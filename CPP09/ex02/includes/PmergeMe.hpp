# ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <cstdlib>
# include <iterator>

class PmergeMe
{
private:
    std::vector<int> tab;
    PmergeMe(void);
public:
    PmergeMe(PmergeMe const &src);
    PmergeMe(char *av[]);
    ~PmergeMe();

    PmergeMe & operator=(PmergeMe const &rhs);
    // MergeInsertSort();

    class ErrorException: public std::exception
    {
    public:
        virtual const char* what() const throw(){
            return ("Error.");
        }
        
    };
};

#endif