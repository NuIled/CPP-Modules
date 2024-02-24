#ifndef BitcoinExchange_H
#define BitcoinExchange_H
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <map>

class BitcoinExchange
{
private:
    std::string num;
    std::string date;
    std::map<std::string, double> _data;
    bool common_year;
public:
    bool isValidDate(int day, int month, int year);
    BitcoinExchange(std::string _file);
    ~BitcoinExchange();
    void get_the_data();
    void check_num();
    void check_line(std::string &line);
};
#endif