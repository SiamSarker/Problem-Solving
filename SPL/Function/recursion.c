#include "stdio.h"

int fact(int n)
{
  if(n == 1)
    return 1;

  else
    return n*fact(n-1);
}

int main(int argc, char const *argv[]) {
  int result = fact(5);
  printf("%d\n", result);
  return 0;
}
