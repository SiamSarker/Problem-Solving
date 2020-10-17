#include<stdio.h>
//int total = 0;
int sum(int arr[], int n, int *total)
{
    *total += arr[n];
    if(n == 0) return *total;
    else 
    return sum(arr, n-1, total);
}
int main(void)
{
    int arr[] = {3, 6, 2, 1}, n = 4;
    int total = 0;
    printf("The Sum is %d\n", sum(arr, n-1, &total));
    return 0;
}