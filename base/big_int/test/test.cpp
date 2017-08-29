#include <iostream>

#include "big_int/arith_uint256.h"



int main(int argc, char** argv)
{
  arith_uint256 t(std::string("1"));
  arith_uint256 b(std::string("1"));
  t += b;
  std::cout << "t + b: " << t.ToString() << std::endl;

  return 0;
}
