#include "stdio.h"

void insert(char str1[], char str2[], char ch, int loc)
{
  int i,j=0;
  for(i = 0;i<loc; i++,j++)
  {
    str2[j] = str1[i];
  }
  str2[loc] = ch;
  j++;
  for(i = loc; str1[i] != 0; i++, j++)
  {
    str2[j] = str1[i];
  }
  str2[j] = 0;
  puts(str2);
}


int main(int argc, char const *argv[]) {
  char str1[20], str2[20], ch;
  int loc;
  gets(str1);
  scanf("%c %d", &ch, &loc);
  insert(str1, str2, ch, loc);
  return 0;
}
