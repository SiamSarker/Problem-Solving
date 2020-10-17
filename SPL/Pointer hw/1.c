#include<stdio.h>
int count = 0;
int sameArray(int *a, int *b, int size)
{
    for(int i = 0; i<size; i++)
    {
        if(a[i] != b[i])
        {
            count++;
            break;
        }
       
    }
     return count;
}
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int result = sameArray(a, b, size);
    if(result == 0)
        printf("1\n");
    else
        printf("0\n");
    
    return 0;
 }