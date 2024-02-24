#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#define Log(x) std::cout << x << std::endl

class Brain
{
public:
    std::string ideas[100];
    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain& operator=(const Brain &obj);
};

#endif // BRAIN_HPP