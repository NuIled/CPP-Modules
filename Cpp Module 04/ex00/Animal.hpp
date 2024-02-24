#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#define Log(x) std::cout << x << std::endl
class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &obj);
	Animal& operator=(const Animal &obj);
	std::string getType() const;
	virtual void makeSound() const;
	virtual ~Animal();
};

#endif // Animal_H
