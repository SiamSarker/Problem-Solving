#include <stdio.h>

int arr[100];
int size = 100;
int length = 0;

insert(int item)
{
    if(length < size)
    {
        arr[length] = item;
        length++;
    }
}


int main()
{
    insert(5);
    insert(10);
    insert(15);
    insert(20);
    insert(25);
    insert(30);

    for(int i=0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}