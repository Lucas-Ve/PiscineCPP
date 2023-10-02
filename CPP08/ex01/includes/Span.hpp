# ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{
private:
    unsigned int _sizeSpan;
    std::vector<int> _arraySpan;
public:
    Span(void);
    Span(unsigned int n);
    Span(Span const &src);
    ~Span();

    Span &operator=(Span const &rhs);

    void addNumber(int nb);
    int shortestSpan();
    int longestSpan();

    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    class SpanFull : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("The Span is full.");
        }
    };

    class CantFindSpan : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Can't find the span.");
        }
    };

    class NoSpaceEnough : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("No space enough.");
        }
    };
};

#endif