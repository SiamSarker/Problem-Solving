#include<stdio.h>
#include<string.h>


int dec2hex(int num, char str[])
{
    if(num < 16)
    {
        if(num < 10)
        {
            str[0] = num + '0';
        }
        else
        {
            str[0] = (num-10) + 'A';
        }
        return 0;
        
    }
    else
    {
        int i = dec2hex(num/16, str);
        int mod = num % 16;
        if(mod < 10)
        {
            str[i+1] = mod + '0';
        }
        else
        {
            str[i+1] = (mod-10) + 'A';
        }
        return i+1;
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    char str[100] = {0};
    dec2hex(num, str);
    printf("%s\n", str);
    return 0;
}