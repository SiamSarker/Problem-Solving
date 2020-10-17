#include<stdio.h>
void reference(int *arr)
{
    int i;
    for(i = 0; i<5; i++)
        printf("%d", arr[i]);
    
}
int main(void)
{
    int arr[] = {4, 5, 7, 5, 20};
    reference(arr);
    return 0;
}