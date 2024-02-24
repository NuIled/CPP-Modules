#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    Log("Cat  Constructor called");
}

Cat::~Cat() {
    Log("Cat  Destructor called");
		// Destructor implementation
}

Cat& Cat::operator=(const Cat &obj){
    if (this != &obj)
        this->type = obj.type;
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
