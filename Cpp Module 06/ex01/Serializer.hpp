#ifndef Serializer_hpp
#define Serializer_hpp
#include <iostream>
struct Data {
    int value;
};
class Serializer
{
private:
    Serializer();
public:
    static uintptr_t serialize(Data* ptr); //It takes a pointer and converts it to the unsigned integer type uintptr_t.
    static Data* deserialize(uintptr_t raw); 
    Serializer(const Serializer& other);  
    Serializer& operator=(const Serializer& other);
    ~Serializer();

};

#endif