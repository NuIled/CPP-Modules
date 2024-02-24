#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
#include <vector>
#include <algorithm>

template<typename T> 
void easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if(it != container.end())
        std::cout << "found the value " << (*it) << " in the container" << '\n';
    throw std::runtime_error("Value not found in the container");
}

#endif