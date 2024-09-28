#include<stdio.h>
#include<string.h>


int dec2bin(int num, char str[])
{
    if(num < 2)
    {
        str[0] = num + '0';
        return 0;
    }
    else
    {
        int i = dec2bin(num/2, str);
        str[i+1] = num%2 + '0';
        return i+1;
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    char str[100] = {0};
    dec2bin(num, str);
    printf("%s\n", str);
    return 0;
}