#include "Rpn.hpp"

Rpn::Rpn(std::string &av) :RPN(){
    std::string allowed ("+-/*");
    bool need_op = false;
    for (size_t i = 0; i < av.length(); i++)
    {
        if(std::isdigit(av[i]))
        {
            int a = std::atoi(av.substr(i,i + 1).c_str());
            if(a > 10)
                throw std::runtime_error("number bigger than 10");
            else
                this->RPN.push(a);
            
            if(this->RPN.size() == 2)
                need_op = true;
        }
        else if(allowed.find(av[i]) != std::string::npos && need_op)
        {
            dothe_calculation(av[i]);
            need_op = false;
        }
        else if(av[i] != ' ')
            throw std::runtime_error("Error");
    }
    if(need_op)
        throw std::runtime_error("Error");
    std::cout << this->RPN.top() << '\n';
}
void Rpn::dothe_calculation(char c)
{
    int b = this->RPN.top();
    this->RPN.pop();
    int a = this->RPN.top();
    this->RPN.pop();
    switch (c)
    {
    case '*':
        this->RPN.push((a * b));
        break;
    case '/':
        if(b == 0)
            throw std::runtime_error("Error divition by 0");
        this->RPN.push((a / b));
        break;
    case '+':
        this->RPN.push((a + b));
        break;
    case '-':
        this->RPN.push((a - b));
        break;
    }
}

Rpn& Rpn::operator=(const Rpn &obj)
{
    if(this != &obj)
    {
        this->RPN = obj.RPN;
    }
    return *this;
}
Rpn::Rpn(const Rpn &obj)
{
    if(this != &obj)
        *this = obj;
}

Rpn::~Rpn()
{
}
