#include<stdio.h>
#include<stdio.h>
void reverse(char *str);
int main(void)
{
    char str[10];
    gets(str);
    reverse(str);
    return 0;
}

void reverse(char *str)
{
        if(*str)
        {
            reverse(str+1);
            printf("%c", *str);
        }
        
}