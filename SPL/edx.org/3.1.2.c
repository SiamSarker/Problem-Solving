#include "stdio.h"

int min(int n, int siam[n]);

int main() {
  int n;
  scanf("%d ", &n);
  int arr[n];
  for(int i = 0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int minimum = min(n, arr);
  printf("%d\n", minimum);
  return 0;
}

int min(int n, int siam[n]){
  int minimum = siam[0];
  for(int i = 0; i<n; i++)
  {
    if(siam[i] < minimum)
    {
      minimum = siam[i];
    }
  }
  return minimum;
}
