#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#define Log(x) std::cout << x << std::endl;

void identify(Base* p){
    if( dynamic_cast<C *>(p))
        Log("type is C")
    if( dynamic_cast<A *>(p))
        Log("type is A")
    if( dynamic_cast<B *>(p))
        Log("type is B")
}
void identify(Base& p){
    try
    {
        A &a = dynamic_cast<A &>(p);
        Log("type is A");
        (void)(a);
    }catch(const std::exception& e){}
    try
    {
        B &b = dynamic_cast<B &>(p);
        Log("type is B");
        (void)(b);
    }catch(const std::exception& e){}
    try
    {
        C &c = dynamic_cast<C &>(p);
        Log("type is C");
        (void)(c);
    }catch(const std::exception& e){}
}
Base *generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomNum = (std::rand() % 3) + 1;
    switch (randomNum)
    {
    case 1:
        return dynamic_cast<Base *> (new A());
    case 3:
        return dynamic_cast<Base *> (new B());
    case 2:
        return dynamic_cast<Base *> (new C());
    default:
        break;
    }
    return dynamic_cast<Base *> (new A());
}
int main() {
    Base *t = generate();
    identify(t);
    identify(*t);
    delete t;
    return 0;
}
