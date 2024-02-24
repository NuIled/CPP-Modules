#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#define Log(x) std::cout << x << std::endl

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal& operator=(const WrongAnimal &obj);
	~WrongAnimal();
	void makeSound() const;
};

#endif // WrongAnimal_H
