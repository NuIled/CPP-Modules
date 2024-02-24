#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    this->brain = new Brain();
    Log("Dog  Constructor called");
    // Constructor implementation
}

Dog::~Dog(){
    delete this->brain;
    Log("Dog  Destructor called");
		// Destructor implementation
}

void Dog::makeSound() const{
    Log("Dog  makeSound: Woof");
}

Dog& Dog::operator=(const Dog &obj){
    if (this != &obj)
    {
        this->type = obj.type;
        delete this->brain;
        this->brain = new Brain();
        this->brain = obj.brain;
    }
    return *this;
};

Dog::Dog(const Dog &obj){
    Log("Dog  Copy Constructor called");
    if (this != &obj)
        *this = obj;
};
