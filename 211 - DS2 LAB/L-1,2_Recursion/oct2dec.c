#include<stdio.h>
#include<string.h>

int oct2dec(char s[], int k)
{
    if (k == 1)
        return s[k-1] -'0';
    else
    {
        int x = s[k-1] - '0';
        int y = oct2dec(s, k-1);
        return 8*y + x;
    }
}

int main()
{
    char str[100];
    scanf("%s", str);
    int n_bit = strlen(str);
    int dec = oct2dec(str, n_bit);
    printf("%d\n", dec);
    return 0;   
}