#include<stdio.h>
int max = 0;
int pass(int arr[], int n)
{
    if(arr[n] > max)
    {
        max = arr[n];
    }
    if(n == 0) return max;
    else
    {
        return pass(arr, n-1);
    }
    
}
int main(void)
{
    int arr[] = {2, 5, 8, 7, 4}, n = 5;
    printf("Max is %d\n", pass(arr, n-1));
    return 0;
}