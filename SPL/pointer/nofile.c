#include<stdio.h>
int main(void)
{
    int a = 56;
    int arr[4] = {2, 3, 4, 5};
    int *p;
    p = &a;
    int *q = arr;
    printf("%d\n", p);
    printf("%d\n", q[2]);
    printf("%d\n", &q[2]);
    printf("%d\n", &arr);
    printf("%d\n", *(arr+2));
    printf("%d\n", *(q+2));


    return 0;
}