#ifndef whatever_HPP
#define whatever_HPP
#include <iostream>

template<typename T>
void swap(T &value, T &value1)
{
    T vtmp = value;
    value = value1;
    value1 = vtmp;
}
template<typename T>
T min(T &value , T &value1)
{
    if(value == value1) return value1;
    if(value > value1) return value1;
    return value;
}
template<typename T>
T max(T &value , T &value1)
{
    if(value == value1) return value1;
    if(value < value1) return value1;
    return value;
}

#endif