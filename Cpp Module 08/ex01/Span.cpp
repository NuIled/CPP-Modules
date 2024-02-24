#include "Span.hpp"

void Span::addNumber(int number)
{
    if(this->Set.size() < this->_size)
        this->Set.insert(number);
    else
        throw std::runtime_error("out of the size");
}

Span::Span() : Set() {}

Span::Span(unsigned int N)
{
    this->_size = N;
}

int Span::shortestSpan()
{
    if(this->Set.size() > 1)
    {
        int tmp;
        std::set<int>::iterator i = ++this->Set.begin();
        int res = *--this->Set.end();
        for (std::set<int>::iterator it = this->Set.begin(); i != this->Set.end(); it++)
        {
            tmp = *i - *it;
            if(tmp < res)
                res = tmp;
            ++i;
        }
        return (res);
    }
    else
        throw std::runtime_error("no span can be found");
}

int Span::longestSpan()
{
    if (this->Set.size() > 1) { 
        std::set<int>::iterator first = this->Set.begin();
        std::set<int>::iterator last = --this->Set.end();
        return static_cast<int> (*last - *first); 
    }
    else
        throw std::runtime_error("no span can be found");
}


void Span::addRange(int *first, int* last) {
    if(std::distance(first,last) + this->Set.size() > this->_size)
        throw std::range_error("size of new Array is to Big For the size");
    Set.insert(first, last);
}

Span& Span::operator=(const Span &obj)
{
    if(this != &obj)
    {
        this->Set = obj.Set;
        this->_size = obj._size;
    }
    return *this;
}
Span::Span(const Span &obj)
{
    if(this != &obj)
        *this = obj;
}
void Span::printSet()
{
    std::set<int>::iterator it;
    for( it = this->Set.begin(); it != this->Set.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

Span::~Span()
{
}
