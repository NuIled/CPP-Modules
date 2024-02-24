#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    Log("Cat  Constructor called");
    this->brain = new Brain();
}

Cat::~Cat() {
    delete this->brain;
    Log("Cat  Destructor called");
		// Destructor implementation
}

Cat& Cat::operator=(const Cat &obj){
    if (this != &obj)
    {
        this->type = obj.type;
        delete this->brain;
        this->brain = new Brain();
        this->brain = obj.brain;
    }
    return *this;
};

void Cat::makeSound() const{
    Log("Cat  makeSound: Meow");
}

Cat::Cat(const Cat &obj){
    Log("Cat  Copy Constructor called");
    if (this != &obj)
        *this = obj;
};
