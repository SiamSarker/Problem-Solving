#include<stdio.h>
int j = 0;

void getMinMax(int *arr, int size, int *arr2, int find)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i] == find)
        {
            arr2[j] = i;
            j++;
        }
    }
}
int main(void)
{
    int arr[10] = {3, 4, 6, 24, 4, 44, 7, 8, 9, 32}, size = 10, arr2[10];
    int max = 0, min = 100, find = 4;
    getMinMax(arr, size, arr2, find);
    printf("Number 4 is in ");
    for(int k = 0; k<j; k++)
    printf("%d ", arr2[k]);
    printf("index\n");
    return 0;
}