#include "BitcoinExchange.hpp"
void bad_input(std::string &line)
{
    std::cerr << "Error: bad input => " << line;
    throw std::runtime_error("");
}
bool BitcoinExchange::isValidDate(int day, int month, int year)
{
    if (year < 2009 || year > 9999)
        bad_input(this->date);
    if (month < 1 || month > 12)
        bad_input(this->date);
    if (day < 1)
        bad_input(this->date);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day > 31)
            bad_input(this->date);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
            bad_input(this->date);
    }
    else
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (day > 29)
                bad_input(this->date);
        }
        else
        {
            if (day > 28)
                bad_input(this->date);
        }
    }
    return true;
}

void BitcoinExchange::check_num()
{
    std::string allowedin;
    std::string allowed = "-+.";
    for (size_t i = 0; i < this->num.length(); i++)
    {
        if (!std::isdigit(this->num[i]) && !std::isspace(this->num[i]))
        {
            if (std::strchr(allowed.c_str(), this->num[i]) && allowed.find(this->num[i + 1]) == std::string::npos)
                allowedin += this->num[i];
            else
                throw std::runtime_error("Number Format Error => ");
        }
    }
    for (size_t i = 0; i < allowedin.length(); i++)
        if (allowedin[i + 1] && allowedin[i] > allowedin[i + 1])
            throw std::runtime_error("Number Format Error => ");
    if (std::atof(this->num.c_str()) > 1000)
        throw std::runtime_error("Error: too large a number.");
    if (std::atof(this->num.c_str()) < 0)
        throw std::runtime_error("Error: not a positive number.");
}

BitcoinExchange::BitcoinExchange(std::string _file)
{
    this->common_year = 0;
    std::string line;
    std::ifstream File("data.csv");
    std::ifstream file(_file);
    if (!File || !file)
        throw std::runtime_error("Error opening File");
    std::string first;
    std::getline(File, first);
    while (std::getline(File, line))
    {
        int pos = line.find(',');
        this->date = line.substr(0, pos);
        line.erase(0, pos + 1);
        this->_data.insert(std::make_pair(this->date.c_str(), std::atof(line.c_str())));
        line.clear();
    }
    this->date.clear();
    this->num.clear();
    line.clear();
    first.clear();
    std::getline(file, first);
    if(first != "date | value")
        throw std::runtime_error("Error File first line should be ==> date | value ");
    while (std::getline(file, line))
    {
        if (line.empty())
            break;
        try
        {
            this->check_line(line);
            this->get_the_data();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            continue;
        }
    }
    File.close();
}
void BitcoinExchange::get_the_data(){
    std::map<std::string,double>::iterator it = this->_data.find(this->date.c_str());
    if(it != this->_data.end())
        std::cout << this->date << " =>" << this->num << " => " << static_cast<float> (std::atof(this->num.c_str()) * it->second) << '\n';
    else if(it != this->_data.begin())
    {
        it = this->_data.lower_bound(this->date.c_str());
        if(this->_data.lower_bound(this->date.c_str())->first != this->date)
            --it;
        std::cout << this->date << " =>" << this->num << " => " << static_cast<float> (std::atof(this->num.c_str()) * it->second) << '\n';
    }
}
void BitcoinExchange::check_line(std::string &line)
{
    std::string dash;
    int year = 0, month = 0, day = 0;
    int pos = line.find('|');
    if (pos < 0 || pos != 11)
        bad_input(line);
    this->date = line.substr(0, pos - 1);
    for (size_t i = 0; i < this->date.length(); i++)
    {
        if (!std::isdigit(this->date[i]))
        {
            if (this->date[i] == '-' && i == 4)
            {
                year = std::atoi(line.substr(0, i).c_str());
                dash += '-';
            }
            else if (this->date[i] == '-' && i == 7)
            {
                month = std::atoi(line.substr((i - 2), i).c_str());
                day = std::atoi(line.substr((i + 1), i + 2).c_str());
                dash += '-';
                isValidDate(day, month, year);
            }
            else
                bad_input(this->date);
        }
    }
    if (dash.length() != 2)
        bad_input(this->date);
    line.erase(0, pos + 1);
    this->num = line;
    this->check_num();
    line.clear();
}

BitcoinExchange::~BitcoinExchange()
{
}
