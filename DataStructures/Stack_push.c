#include<stdio.h> 

size = 100;
int arr[size];
int top = 0;

int push(int item){
    if (top < size)
    {
        arr[top] = item;
        top++;
        return 1;
    }
    return -1;
}

int pop(){
    if (top > 0)
    {
        int val = arr[top - 1];
        top--; // also for peak
        return val;
    }
    return -1;
}

int *Q;
int front = 0, back = 0, length = 0;
int enqueue(int item){
    if (length == size)
    {
        int *temp = malloc(2 * size * sizeof(int));
        int j = 0;
        for(int i = back; i<size; i++, j++)
            temp[j] = Q[i];
        for(int i = 0; i<front; i++, j++)
            temp[j] = Q[i];
        free(Q);
        Q = temp;

        back = 0;
        front = size;
        size = size * 2;
    }

    Q[front] = item;
    front = (front+1) % size;
    length++;
    return 1;
    
}