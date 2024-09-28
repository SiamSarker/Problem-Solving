#include <stdio.h>

int sum(int *A, int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
        s += A[i];
    return s;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    printf("%d %d %d\n", arr[0], &arr[1], arr);
    printf("%d\n", sum(arr, 5));
    return 0;
}