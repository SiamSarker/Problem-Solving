#include "stdio.h"

double meters(int conv)
{
  return conv * 3.2808;
}
double gram(int conv)
{
  return conv * 0.002205;
}
double temp(int conv)
{
  return 32 + 1.8 * conv;
}
int main()
{
  int n, i;
  double value;
  char ch;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%lf ", &value);
    scanf("%c", &ch);
    if (ch == 'm')
      printf("%lf ft\n", meters(value));

    else if (ch == 'g')
      printf("%lf lbs\n", gram(value));

    else if (ch == 'c')
      printf("%lf f\n", temp(value));
  }
  return 0;
}
