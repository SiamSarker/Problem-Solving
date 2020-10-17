#include "stdio.h"
#include "string.h"

struct Room{
  int num, length, width, max;
};
int main(int argc, char const *argv[]) {
  int n, num, length, width, max = 0;
  scanf("%d", &n);
  struct Room arr[n], arr1[n];
  for(int i = 0; i<n; i++){
  scanf("%d", &arr[i].num);
  scanf("%d", &arr[i].length);
  scanf("%d", &arr[i].width);
  arr1[i].max = arr[i].length * arr[i].width;
  if(arr1[i].max > max){
    max = arr1[i].max;
    num = arr[i].num;
    length = arr[i].length;
    width = arr[i].width;
  }
}

  printf("%d %d %d\n", num, length, width);

  return 0;
}
