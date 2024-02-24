#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::string str = "MAROUAN";
    Dog* j = new Dog();
    const Cat* g = new Cat();
    const Animal* meta[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
           {
             g->getBrain()->ideas[i]=str;
             meta[i] = g;
           }
        else
            j->getBrain()->ideas[i]=str;
            meta[i] = j;
    }
    Dog G ;
    G = *j;
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            meta[i]->makeSound();
        else
            meta[i]->makeSound();
    }
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            Log(g->getBrain()->ideas[i]);
        else
            Log(j->getBrain()->ideas[i]);
    }
    delete j;
    delete g;
    return 0;
}
