#include<stdio.h>

void reverse(int *arr, int size)
{
    int temp;
    for(int i = 0; i<size/2; i++)
    {
        temp = arr[size-1-i];
        arr[size-1-i] = arr[i];
        arr[i] = temp;

    }
}
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5}, size = 5;
    reverse(arr, size);
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    return 0;

}