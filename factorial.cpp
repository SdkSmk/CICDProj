#include "factorial.hpp"
int factorial(int n)
int factorial(int n)
{
 if(n<0)
 throw UserException{};
 if(n == 0)
 return 1;

 return n * factorial(n-1);
}
