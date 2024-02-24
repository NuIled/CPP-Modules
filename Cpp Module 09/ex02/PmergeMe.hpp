#ifndef PmergeMe_hpp
#define PmergeMe_hpp
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <sstream>
#include <iomanip> 

class PmergeMe
{
public:
    PmergeMe(char ** av, int ac);
    ~PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe&  operator=(const PmergeMe& other);
};

#endif
