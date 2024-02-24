#include "WrongCat.hpp"

WrongCat::WrongCat() {
    // Constructor implementation
    Log("WrongCat  Constructor called");
}

WrongCat::~WrongCat() {
    Log("WrongCat  Destructor called");
		// Destructor implementation
}

WrongCat& WrongCat::operator=(const WrongCat &obj){
    if (this != &obj)
        this->type = obj.type;
    return *this;
};

WrongCat::WrongCat(const WrongCat &obj){
    Log("WrongCat  Copy Constructor called");
    if (this != &obj)
        *this = obj;
};

void WrongCat::makeSound() const{
    std::cout << "WrongCat  makeSound: Meow" << std::endl;
}