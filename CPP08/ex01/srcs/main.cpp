# include "../includes/Span.hpp"

int main()
{
    // {
    //     std::cout << "================TEST SUBJECT================" << std::endl;
    //     Span sp = Span(5);
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(9);
    //     sp.addNumber(11);
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    //     std::cout << "============================================" << std::endl << std::endl;
    // }

    // {
    //     try 
    //     {
    //         Span sp = Span(3);
    //         sp.addNumber(15);
    //         std::cout << sp.shortestSpan() << std::endl;
    //     }
    //     catch (std::exception & e)
    //     {
    //         std::cout << e.what() << std::endl; 
    //     }
    // }

    // {
    //     try
    //     {
    //         Span sp = Span(2);
    //         sp.addNumber(5);
    //         sp.addNumber(10);
    //         sp.addNumber(546);
    //         std::cout << sp.shortestSpan() << std::endl;
    //     }
    //     catch (std::exception & e)
    //     {
    //         std::cout << e.what() << std::endl; 
    //     }
    // }
    Span				span3(5);
	// std::vector<int>	vect;

	// vect.push_back(25);
	// vect.push_back(5);
	// vect.push_back(13);
	// vect.push_back(90);
	// vect.push_back(-2);
	// span3.addNumber(vect.begin(), vect.end());
	// std::cout << span3.shortestSpan() << std::endl;
    std::vector<int> range(5, 10);
    range[2] = 40;
    span3.addNumber(range.begin(), range.end());
    std::cout << span3.longestSpan() << std::endl;
    return 0;
}