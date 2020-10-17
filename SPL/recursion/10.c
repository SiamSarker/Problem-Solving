#include<stdio.h>
#include<string.h>
int count = 0;

int copyStr(char p1[], int n, int i)
{
    if(n/2 == 0) return count;
    else
    {
        if(p1[i] != p1[n])
        count++;
        return copyStr(p1, n-1, i+1); // careful not i++
    }
    
}

int main(void)
{
    char str1[10] = "madam";
    int i = 0;
    int length = strlen(str1);
    int pal = copyStr(str1, length-1, i);
    if(pal == 0)
        printf("Yes\n");
    else
    {
        printf("No\n");
    }
    

    return 0;
}