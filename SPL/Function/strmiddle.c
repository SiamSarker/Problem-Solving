#include <stdio.h>

void insertCharInArray(char str1[], char str2[], char ch, int loc)
{
    int i, j;
    j=0;
    for(i=0;i<loc;i++, j++){
        str2[j] = str1[i];
    }
    str2[loc] = ch;
    j++; //why ?
    for(i = loc; str1[i]!='\0'; i++, j++){
        str2[j] = str1[i];
    }
    str2[j] = 0;

}


int main()
{
    char str1[20], str2[20], ch;
    int loc;
    gets(str1);
    scanf("%c", &ch);
    scanf("%d", &loc);
    puts(str2);
    insertCharInArray(str1, str2, ch, loc);
    puts(str2);// No return from function, but still working?!!
    return 0;
}
