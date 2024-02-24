#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* g = new Cat();
    const Animal* meta[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            meta[i] = g;
        else
            meta[i] = j;
    }
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            meta[i]->makeSound();
        else
            meta[i]->makeSound();
    }
    delete j;
    delete g;
    return 0;
}
