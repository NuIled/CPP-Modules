#include "Brain.hpp"

Brain::Brain(/* args */)
{
    Log("Brain   Constructor called");
}

Brain::~Brain()
{
    Log("Brain   Destructor called");
}

Brain::Brain(const Brain &obj)
{
    Log("Brain   Copy Constructor called");
    if (this != &obj)
        *this = obj;
}

Brain& Brain::operator=(const Brain &obj)
{
    if (this != &obj)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    return *this;
}
