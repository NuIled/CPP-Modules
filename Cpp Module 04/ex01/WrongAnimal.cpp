#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    Log("WrongAnimal  Constructor called");
    // Constructor implementation
}

WrongAnimal::~WrongAnimal() {
    Log("WrongAnimal  Destructor called");
		// Destructor implementation
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj){
    if (this != &obj)
        this->type = obj.type;
    return *this;
};

WrongAnimal::WrongAnimal(const WrongAnimal &obj){
    Log("WrongAnimal  Copy Constructor called");
    if (this != &obj)
        *this = obj;
};
void WrongAnimal::makeSound() const{
    Log("WrongAnimal  makeSound: ??");
};