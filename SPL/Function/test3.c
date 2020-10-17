#include<stdio.h>
void pass(int *p)
{
    for(int i = 0; i<=3; i++)
    {
        printf("%d ", *p);
        p--;
    }
}
int main(void)
{
    int arr[] = {3, 6, 8, 9};
    int *p = &arr[3];
    pass(&arr[3]);
    return 0;

}