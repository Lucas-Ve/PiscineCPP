#include "../includes/PmergeMe.hpp"

std::vector<int> generateJacobsthalNumbers(int n)
{
    std::vector<int> jacobsthal;
    if (n <= 0) return jacobsthal;
    jacobsthal.push_back(0);
    if (n > 1) {
        jacobsthal.push_back(1);
    }
    for (int i = 2; i <= n; ++i) {
        if (jacobsthal[i-1] + 2 * jacobsthal[i-2] > n)
        {
            jacobsthal.push_back(jacobsthal[i - 1] + 2 * jacobsthal[i - 2]);
            break;
        }
        jacobsthal.push_back(jacobsthal[i - 1] + 2 * jacobsthal[i - 2]);
    }
    return jacobsthal;
}

std::vector<int> generateModifiedJacobsthalSequence(int n) {
    std::vector<int> jacobsthal = generateJacobsthalNumbers(n);
    std::vector<int> sequence;
    std::vector<int>::iterator it = jacobsthal.begin();
    it++;
    while (it != jacobsthal.end()) {
        int i = 0;
        for(int j = *it; j >= *(it - 1); j--)
        {
            if (i == 0)
            {
                sequence.push_back(*it);
                i = 1;
            }
            else if(j > *(it - 1))
                sequence.push_back(j);
        }
        ++it;
    }
    return sequence;
}