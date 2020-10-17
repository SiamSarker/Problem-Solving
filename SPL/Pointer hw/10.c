#include<stdio.h>
int main(void)
{
    int arr[3] = {1, 2, 3}, size = 3;
    int *p = arr;
    int temp;
    temp = p[0];
    p[0] = p [2];
    p[2] = temp;
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;
}