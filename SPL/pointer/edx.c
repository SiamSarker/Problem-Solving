#include<stdio.h>
void reverseArray(int *n)
{
    int temp;
    for(int i = 0; i < 3;i++)
    {
        temp = n[i];
        n[i] = n[6-1-i];
        n[6-1-i] = temp;
    }
}
int main(void)
{
    int n[20];
    int *q = n;
    for(int i = 0; i<6; i++)
        scanf("%d", &n[i]);
    reverseArray(q);
    for(int i = 0; i<6; i++)
        printf("%d ", n[i]);
    printf("\n");
    return 0;
}