#include<stdio.h>
void Reference(char *s)
{
    while (*s)
    {
        printf("%c", *s);
        s++;
    }
}

int main(void)
{
    char str[20] = "This Is Siam Sarker";
    //printf("%s\n", str);
    Reference(str);
    return 0;
}