#include "stdio.h"
int main() {
  int n;
  scanf("%d", &n);
  int count[n];
  char c[n];
  int sum = 0;
  for(int i=0; i<n; i++)
  {
    scanf("%d", &count[i]);
    scanf("%c", &c[i]);
  }
  /*for(int i = 0; i<n; i++)
  {
    if(c[i] != 'i' && c[i] != 'c' && c[i] != 'd')
      {
        printf("Invalid tracking code type\n");
        return 0;
      }
  }*/

  for(int i = 0; i<n; i++)
  {
    if(c[i] == 'i')
      sum += count[i]*sizeof(int);
        else if(c[i] == 'c')
          sum += count[i]*sizeof(char);
            else if(c[i] == 'd')
              sum += count[i]*sizeof(double);
  }

  printf("%d bytes\n", sum);



  return 0;
}
