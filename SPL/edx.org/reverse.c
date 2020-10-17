#include<stdio.h>
int main(void)
{
    char word[68] [40];
    for(int i = 0; i<68; i++)
        scanf("%s", word[i]);

    for(int i = 67; i>=0; i--)
        printf("%s ", word[i]);

    return 0;
}