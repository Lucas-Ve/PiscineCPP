# ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <cstdlib>

class RPN
{
private:
    int _result;
public:
    RPN(void);
    RPN(RPN const &src);
    ~RPN();

    RPN & operator=(RPN const &rhs);
    void ReversePolishNotation(std::string const &str);
    int getResult(void) const;

    class InvalidArgException: public std::exception
    {
    public:
        virtual const char* what() const throw(){
            return ("Error : invalid argument.");
        }
        
    };

    class InvalidDivException: public std::exception
    {
    public:
        virtual const char* what() const throw(){
            return ("Error : can't divid by 0.");
        }
        
    };
};

#endif