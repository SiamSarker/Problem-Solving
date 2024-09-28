#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    printf("%d %d %d\n", arr[0], &arr[1], arr);

    return 0;
}