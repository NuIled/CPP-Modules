#include "Animal.hpp"

Animal::Animal() {
    // Constructor implementation
    Log("Animal  Constructor called");
    this->type = "Animal";
}

Animal::Animal(std::string type) {
    Log("Animal  Constructor called");
    this->type = type;
    // Constructor implementation
}

Animal::~Animal() {
    Log("Animal  Destructor called");
		// Destructor implementation
}

Animal& Animal::operator=(const Animal &obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Animal::Animal(const Animal &obj){
    Log("Animal  Copy Constructor called");
    if (this != &obj)
        *this = obj;
}

std::string Animal::getType() const{
   return (this->type);
}
void Animal::makeSound() const{
    Log("Animal  makeSound: ???");
}
