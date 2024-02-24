#ifndef SPAN_H
#define SPAN_H
#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>

class Span
{
private:
    unsigned int _size;
    std::set<int> Set;
public:
    Span();
    Span(unsigned int N);
    Span &operator=(const Span &obj);
    Span(const Span &obj);
    ~Span();
    void addNumber(int number);
    int  shortestSpan();
    int  longestSpan();
    void addRange(int* first, int* last);
    void printSet(void);
};


#endif