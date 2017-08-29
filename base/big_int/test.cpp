#include "arith_uint256.h"
#include <iostream>



int main()
{
  arith_uint256 t(std::string("1"));
  arith_uint256 b(std::string("1"));
  t += b;
  std::cout << "t + b: " << t.ToString() << std::endl;
}
