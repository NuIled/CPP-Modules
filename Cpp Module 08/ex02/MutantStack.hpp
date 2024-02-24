#ifndef MutantStack_hpp
#define MutantStack_hpp
#include <iostream>
#include <stack>
#include <vector>

template<typename T,typename Container = std::vector<T> >
class MutantStack : public std::stack<T,Container>
{
public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack&  operator=(const MutantStack& other) const {
        std::stack<T,Container>::operator=(other);
        return *this;
    }
    typedef typename Container::iterator iterator;
    iterator begin(){return this->c.begin();} 
    iterator end(){return this->c.end();} 
};

#endif // MutantStack_hpp