#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<class T>
void ft_print(const T &c){
    std::cout << c << std::endl;
};

template<class T>
void iter(T *arry, int lenght, void (*func)(const T &)){
    for (int i = 0; i < lenght; i++)
        func(arry[i]);
};

template<class T>
void iter(T *arry, int lenght, void (*func)(T &)){
    for (int i = 0; i < lenght; i++)
        func(arry[i]);
};
#endif