#include<stdio.h>
int i = 0;
int count = 0;
int sameArray(char *a, char *b, int size)
{
    for(int i = 0; i<size; i++)
    {
        if(a[i] != b[i])
        {
            count++;
            break;
        }
        i++;
    }
     return count;
}
int main(void)
{
    char a[] = "This is Siam";
    char b[] = "This is Siam";
    int size = 12;
    int result = sameArray(a, b, size);
    if(result == 0)
        printf("1\n");
    else
        printf("0\n");
    
    return 0;
 }