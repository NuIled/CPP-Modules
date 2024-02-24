#include "Span.hpp"
int main()
{
  try
  {  
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(10);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {    
    Span sp(6);
    int numbers[] = {1, 2, 3, 4, 5};
    sp.addRange(numbers, (numbers + sizeof(numbers) / sizeof(numbers[0])));
    sp.printSet();
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  return 0;
}