#include<stdio.h>
void reverse(char *p)
{
    if(*p)
    {
        reverse(p+1);
        printf("%c", *p);
    }
}
int main(void)
{
    char str[] = "abcd";
    reverse(str);
    return 0;
}