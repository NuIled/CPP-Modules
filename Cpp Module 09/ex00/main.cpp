#include "BitcoinExchange.hpp"

int main( int ac ,char **av ) {
    if(ac == 2)
    {
        try
        {
            std::string _file(av[1]);
            BitcoinExchange BitcoinE(_file);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}