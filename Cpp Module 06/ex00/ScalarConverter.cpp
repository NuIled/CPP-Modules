#include "ScalarConverter.hpp"
#define Log(x) std::cout << x << std::endl;
const std::string ScalarConverter::arry[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
const char *ScalarConverter::imposibleconv::what()const _NOEXCEPT {
        return "imposible";
}
ScalarConverter::ScalarConverter(const ScalarConverter &other) {
    _str = other._str;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj) {
    if (this != &obj) {
        _str = obj._str;
    }
    return *this;
}
ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const std::string &str):_str(str){}
ScalarConverter::~ScalarConverter(){}
void ScalarConverter::convert(const std::string &str)
{
    ScalarConverter conv(str);
    conv.print_char();
    conv.print_int();
    conv.print_float();
    conv.print_double();
}

int ScalarConverter::check_string(){ 
    if(this->_str.empty())
        return -1;
    std::string allowedin;
    std::string allowed = "-+.f";
    for (size_t i = 0; i < 6 ; i++)
        if (this->_str == arry[i])
            return true;
    for (size_t i = 0; i < this->_str.length(); i++)
    {
        if(!std::isdigit(this->_str[i]) && !std::isspace(this->_str[i]))
        {
            if (std::strchr(allowed.c_str(),this->_str[i]) && !std::strchr(allowed.c_str(),this->_str[i - 1]))
                {
                    if(allowedin.find(this->_str[i]) != std::string::npos)
                        return false;
                    allowedin += this->_str[i];
                }
            else 
                return false;
        }
    }
    for (size_t i = 0; i < allowedin.length(); i++)
        if(allowedin[i + 1] && allowedin[i] > allowedin[i + 1])
            return false;
    if((this->_str[this->_str.length() - 1] == 'f' && allowedin.find('.') == std::string::npos )|| \
            (this->_str[this->_str.length() - 1] != 'f' && allowedin.find('.') != std::string::npos))
        return false;
    return true;
}

void ScalarConverter::print_char(){
    if(!this->check_string())
    {
        Log("imposible");
        return ;
    }
    for (size_t i = 0; i < 6 ; i++)
        if (this->_str == arry[i])
        {
            Log("imposible");
            return ;
        }
    if(!std::isprint(std::atof(this->_str.c_str())))
    {
        Log("Non displayable");
        return ;
    }
    Log( '\'' << static_cast<char> (std::atof(this->_str.c_str())) << '\'');
    
}

std::string formatDouble(double value, int precision,bool f) {
    float v;
    std::ostringstream oss;
    oss << std::fixed;
    oss.precision(precision);
    if(f)
        {
            v = static_cast<float> (value);
        }
    else
        {
            v = value;
        }
    oss << v;
    return oss.str();
}

void ScalarConverter::print_int(){
    if(this->check_string() == 0)
    {
        Log("imposible");
        return ;
    }
    for (size_t i = 0; i < 6 ; i++)
        if (this->_str == arry[i])
        {
            Log("imposible");
            return ;
        }
    int res = std::atoi(this->_str.c_str());
    if (errno == ERANGE)
    {
        errno ^= errno;
        Log("overflow occures");
    }
    else
    {
        Log(static_cast<int>(res));
    }
}
void ScalarConverter::print_float(){
    int i = 1;
    std::string tmp;
    if(this->check_string() == 0)
    {
        Log("imposible");
        return ;
    }
    for (size_t i = 0; i < 6 ; i++)
        if (this->_str == arry[i])
            {
                Log(arry[i]);
                return ;
            }
    if (this->_str[this->_str.length() - 1] == 'f')
    {
        tmp = this->_str;
        tmp.erase(0,tmp.find('.'));
        i = tmp.length() - 2;
    }
    double res = (std::atof(this->_str.c_str()));
    if (errno == ERANGE )
    {
        Log("overflow occures");
        errno ^= errno;
    }
    else
    {
        Log(formatDouble(res, i,1) << 'f');
    }
}
void ScalarConverter::print_double(){
    int i = 1;
    std::string tmp;
    if(this->check_string()== 0)
    {
        Log("imposible");
        return ;
    }
    for (size_t i = 0; i < 6 ; i++)
    if (this->_str == arry[i])
        {
            Log(arry[i]);
            return ;
        }
    if (this->_str[this->_str.length() - 1] == 'f')
    {
        tmp = this->_str;
        tmp.erase(0,tmp.find('.'));
        i = tmp.length() - 2;
    }
    double res = static_cast<double> (std::atof(this->_str.c_str()));
    if (errno == ERANGE)
    {
        Log("overflow occures");
        errno ^= errno;
    }
    else
    {
        Log(formatDouble(res, i,0));
    }
}