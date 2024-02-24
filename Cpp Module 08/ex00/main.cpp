#include "easyfind.hpp"

int main( void ) {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    try
    {
        easyfind(vec,2);
        easyfind(vec,8);
    }
    catch(const std::exception& e)
    {std::cerr << e.what() << '\n';}
    return 0;
}