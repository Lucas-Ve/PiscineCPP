# include "easyfind.hpp"
# include <vector>
# include <list>


int main()
{
    std::vector<int> vec;
    std::list<int> list;

    vec.push_back(2);
    vec.push_back(-5);
    vec.push_back(99);
    vec.push_back(0);

    list.push_back(8);
    list.push_back(-895);
    list.push_back(785);
    list.push_back(156);

    std::vector<int>::iterator it_find_vec = easyfind(vec, 0);
    std::cout << "Search 0 : " << *it_find_vec << std::endl;
    try
    {
        std::cout << "Search 10000 : ";
        it_find_vec = easyfind(vec, 10000);
        std::cout << *it_find_vec << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }

    std::list<int>::iterator it_find_list = easyfind(list, -895);
    std::cout << "Search -895 : " << *it_find_list << std::endl; 
}