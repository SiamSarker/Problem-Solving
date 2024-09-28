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

print()
{
    for(int i=0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    insert(5);
    print();
    insert(10);
    print();
    insert(15);
    print();
    insert(20);
    print();
    insert(25);
    print();
    insert(30);
    print();

    
    return 0;
}