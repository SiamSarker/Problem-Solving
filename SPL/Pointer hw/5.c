#include<stdio.h>

void getMinMax(int *numbers, int size, int *min, int *max)
{
    for(int i = 0; i<size; i++)
    {
        if(numbers[i] > *max)
            *max = numbers[i];
        if(numbers[i] < *min)
            *min = numbers[i];
    }
}
int main(void)
{
    int arr[10] = {3, 4, 6, 24, 5, 44, 7, 8, 9, 32}, size = 10;
    int max = 0, min = 100;
    getMinMax(arr, size, &min, &max);
    printf("Max is %d\nMin is %d\n", max, min);
    return 0;
}