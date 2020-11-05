#include <stdio.h>

int arr[100];
int size = 100;
int length;

void init() {
    length = 0;
}

void print() {
    for(int i=0; i<length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int is_full() {
    // write your code here
    if(length == size)  // when length becomes same as the size that means the array is full 
        return 1;
    return 0;
}

int is_empty() {
    // write your code here
    if(length == 0)  // when length is 0 it means the array is 0
        return 1;
    return 0;
}

int insert_first(int item) {
    // write your code here
    if(length < size) // condition to see whether the array is full or not
    {
        for(int i = length-1; i >= 0; i--)  // right shifting every element from last to first
        {
            arr[i+1] = arr[i];  //  right shifting
        } 
        arr[0] = item;  //  insert at first index
        length++;   //  length increase by 1 
        return 1;
    }
    return 0;
}

int insert_last(int item) {
    // write your code here
}

int insert_at(int item, int pos) {
    // write your code here
}

int search(int item) {
    // write your code here
}

int remove_first() {
    // write your code here
}

int remove_last() {
    // write your code here
}

int remove_at(int pos) {
    // write your code here
}

int remove_item_first(int item) {
    // write your code here
}

int remove_item_last(int item) {
    // write your code here
}

int remove_item_all(int item) {
    // write your code here
}

int replace(int old_item, int new_item) {
    // write your code here
}

void clear() {
    // write your code here
}

int main() {
    init(); // initializes the arraylist first
    // test your functions here
    printf("Is full? %d \n", is_full());
    printf("Is empty? %d \n", is_empty());
    printf("insert first? %d \n", insert_first(10));
    print();



    return 0;
}
