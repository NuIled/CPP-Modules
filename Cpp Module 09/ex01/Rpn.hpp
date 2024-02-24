#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cerrno>

class Rpn
{
private:
    std::stack<int> RPN;
public:
    Rpn(std::string &av);
    Rpn &operator=(const Rpn &obj);
    Rpn(const Rpn &obj);
    ~Rpn();
    void dothe_calculation(char c);
};
#endif