#include "MutantStack.hpp"
int main()
{
    MutantStack<int> sp;
    sp.push(6);
    sp.push(6);
    sp.push(3);
    sp.push(17);
    sp.push(9);
    sp.push(11);
    sp.pop();
    MutantStack<int>::iterator it = sp.begin();
    MutantStack<int>::iterator ite = sp.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    return 0;
}