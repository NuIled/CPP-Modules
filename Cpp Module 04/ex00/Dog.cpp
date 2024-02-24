#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    Log("Dog  Constructor called");
    // Constructor implementation
}

Dog::~Dog(){
    Log("Dog  Destructor called");
		// Destructor implementation
}

void Dog::makeSound() const{
    Log("Dog  makeSound: Woof");
}

Dog& Dog::operator=(const Dog &obj){
    if (this != &obj)
        this->type = obj.type;
    return *this;
};

Dog::Dog(const Dog &obj){
    Log("Dog  Copy Constructor called");
    if (this != &obj)
        *this = obj;
};
