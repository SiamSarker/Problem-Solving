#include<stdio.h>
#include<string.h>

int hex2dec(char s[], int k)
{
    if (k == 1)
        return s[k-1] -'0';
    else
    {
        int x, y;
        if (s[k-1] < 10)
        {
            x = s[k-1] - '0';
            y = hex2dec(s, k-1);
        }
        else
        {
            x = s[k-1] -'A' + 10;
            y = hex2dec(s, k-1);
        }
        
        return 16*y + x;
    }
}

int main()
{
    char str[100];
    scanf("%s", str);
    int n_bit = strlen(str);
    int dec = hex2dec(str, n_bit);
    printf("%d\n", dec);
    return 0;   
}