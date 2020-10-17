#include <stdio.h>
void stcat(char *str1, char *str2);
int main(void)
{
    char str1[20], str2[20];
    gets(str1);
    gets(str2);
    stcat(str1, str2);
    puts(str1);
    return 0;
}
void stcat(char *str1, char *str2)
{
    int i = 0, len = 0;
    while (str1[len] != '\0')
        len++;
    while (str2[i] != '\0')
    {
        str1[len] = str2[i];
        i++;
        len++;
    }
    str1[len] = '\0';
}