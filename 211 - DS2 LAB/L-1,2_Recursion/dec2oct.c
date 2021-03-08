#include<stdio.h>
#include<string.h>


int dec2oct(int num, char str[])
{
    if(num < 8)
    {
        str[0] = num + '0';
        return 0;
    }
    else
    {
        int i = dec2oct(num/8, str);
        str[i+1] = num%8 + '0';
        return i+1;
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    char str[100] = {0};
    dec2oct(num, str);
    printf("%s\n", str);
    return 0;
}