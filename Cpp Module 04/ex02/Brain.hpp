#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#define Log(x) std::cout << x << std::endl

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain& operator=(const Brain &obj);

};

#endif // BRAIN_HPP