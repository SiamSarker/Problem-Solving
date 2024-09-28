#include <stdio.h>

int arr[100];
int size = 100;
int length = 0;

void insert_last (int item)
{
    if(length < size)
    {
        arr[length] = item;
        length++;
    }
}

void insert_first(int item)
{
    if(length < size)
    {
        for(int i = length-1; i >= 0; i--)
        {
            arr[i+1] = arr[i];
            
        } 
        arr[0] = item;
        length++;
    }
}


void insert_at(int item, int pos)
{
    if(length < size && pos>=0 && pos <= length)
    {
        for(int i = length-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];
            
             } 
        arr[0] = item;
        length++;
        
    }
}

int search(int key)
{
    for(int i = 0; i<length; i++)
    {
        if(arr[i] == key)
            return i;
    }

    return -1;
        
}



void print()
{
    for(int i=0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    insert_first(5);
    print();
    insert_first(10);
    print();
    insert_last(15);
    print();
    insert_first(20);
    print();
    insert_last(25);
    print();
    insert_first(30);
    print();

    
    return 0;
}