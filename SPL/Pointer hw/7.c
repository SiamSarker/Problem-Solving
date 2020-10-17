#include<stdio.h>
void ArrayCopy(int *a, int *b, int size)
{
    for(int i = 0; i<size; i++)
        b[i] = a[i];
}
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int size = 5;
    ArrayCopy(a, b, size);
    for(int i = 0; i<size; i++)
        printf("%d ", b[i]);
    
    return 0;
 }