
#include "PmergeMe.hpp"

unsigned long str_to_num(std::string &num)
{
    char *err =NULL;
    unsigned long number;
    number = std::strtoul(num.c_str(),&err,10);
    if(errno == ERANGE)
        throw std::runtime_error("overflow occures");
    return number;
}

int main(int ac , char **av)
{
    if (ac < 2)
    {
        std::cerr << "./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`" << std::endl;
        return (1);
    }
    try
    {
        PmergeMe num(av,ac);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}
