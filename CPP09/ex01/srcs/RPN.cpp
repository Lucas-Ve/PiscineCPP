#include "../includes/RPN.hpp"

RPN::RPN(void):_result(0){}

RPN::RPN(RPN const &src)
{
    *this = src;
}

RPN::~RPN(){}

RPN & RPN::operator=(RPN const &rhs)
{
    this->_result = rhs._result;
    return (*this);
}

int RPN::getResult(void) const
{
    return (this->_result);
}

void RPN::ReversePolishNotation(std::string const &str)
{
    std::istringstream iss(str);
    std::string token;
    std::stack<int> stack;

    while (iss >> token)
    {
        if(std::isdigit(token[0]) && !token[1])
            stack.push(std::atoi(token.c_str()));
        else if ((token == "-" || token == "+" || token == "*" || token == "/"))
        {
            if (stack.size() < 2)
                throw(RPN::InvalidArgException());
            int number2 = stack.top();
            stack.pop();
            int number1 = stack.top();
            stack.pop();
            if (token[0] == '+')
                stack.push(number1 + number2);
            else if (token[0] == '-')
                stack.push(number1 - number2);
            else if (token[0] == '*')
                stack.push(number1 * number2);
            else
            {
                if (number2 == 0)
                    throw(RPN::InvalidDivException());
                stack.push(number1 / number2);
            }
        }
        else
            throw(RPN::InvalidArgException());
    }
    if (stack.size() != 1)
        throw(RPN::InvalidArgException());
    this->_result = stack.top();
}
