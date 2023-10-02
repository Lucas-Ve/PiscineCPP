#include "../includes/Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int n):_sizeSpan(n) {}

Span::~Span() {}

Span::Span(Span const &src):_sizeSpan(src._sizeSpan), _arraySpan(src._arraySpan) {}

Span & Span::operator=(Span const &rhs)
{
    this->_sizeSpan = rhs._sizeSpan;
    this->_arraySpan = rhs._arraySpan;
    return (*this);
}

void Span::addNumber(int nb)
{
    if (this->_arraySpan.size() >= this->_sizeSpan)
        throw (Span::SpanFull());
    else
        this->_arraySpan.push_back(nb);
}

int Span::longestSpan(void)
{
    if (this->_arraySpan.size() <= 1)
        throw (Span::CantFindSpan());
    else
    {
        std::vector<int> sortSpan = this->_arraySpan;
        std::sort(sortSpan.begin(), sortSpan.end());
        return (sortSpan[sortSpan.size() - 1] - sortSpan[0]);
    }
}

int Span::shortestSpan(void)
{
    if (this->_arraySpan.size() <= 1)
        throw (Span::CantFindSpan());
    else
    {
        std::vector<int> sortSpan = this->_arraySpan;
        std::sort(sortSpan.begin(), sortSpan.end());
        int shortest = sortSpan[1] - sortSpan[0];
        for (size_t i = 1; i < this->_arraySpan.size(); i++)
            if (shortest > (sortSpan[i] - sortSpan[i - 1]))
                shortest = sortSpan[i] - sortSpan[i - 1];
        return (shortest);
    }
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int> add(begin, end);

    if (add.size() > this->_sizeSpan)
        throw (Span::NoSpaceEnough());
    else
        std::copy(add.begin(), add.end(), std::back_inserter(this->_arraySpan));
}