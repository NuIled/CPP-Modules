#include "Rpn.hpp"
int main(int ac ,char **av)
{
  if (ac == 2)
  {
    try
    {
      std::string str(av[1]);
      Rpn rp(str);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
  }
  return 0;
}