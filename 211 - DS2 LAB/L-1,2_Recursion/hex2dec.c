#include<stdio.h>
#include<string.h>

int hex2dec(char number[], int size,int pos) {
   int add;
   if (pos == size)
       return 0;
   char digit = number[size - pos - 1];

    if (digit >= '0' && digit <= '9')
        add = digit - '0';
    else add = digit - 'A' + 10;

   return 16 * hex2dec(number, size, pos + 1) + add;
}

int main()
{
    char str[100];
    scanf("%s", str);
    int n_bit = strlen(str);
    int dec = hex2dec(str, n_bit, 0);
    printf("%d\n", dec);
    return 0;   
}