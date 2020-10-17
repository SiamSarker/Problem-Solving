#include<stdio.h>
#include<string.h>

void copyStr(char p1[], char p2[], int n, int i)
{
    if(n < 0) return;
    else
    {
        p2[i] = p1[n];
        return copyStr(p1, p2, n-1, i+1); // careful not i++
    }
    
}

int main(void)
{
    char str1[100] = "This is Siam";
    char str2[100];
    int i = 0;
    int length = strlen(str1);
    copyStr(str1, str2, length-1, i);
    puts(str2);
    return 0;
}