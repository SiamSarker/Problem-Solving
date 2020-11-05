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
    if(length < size)   //  condition to see whether the array is full or not
    {
        arr[length] = item;  //  insert at last index
        length++;   //  length increse by 1
        return 1;
    }
    return 0;

}

int insert_at(int item, int pos) {
    // write your code here
    if(length < size && pos>=0 && pos <= length)   //  condition to see whether the array is full or not and also checks if the postion is non-negetive and smaller then length
    {
        for(int i = length-1; i>=pos; i--)   //  right shifting from last index to position index
        {
            arr[i+1] = arr[i];   //  right shifting
        } 
        arr[pos] = item;   // inset at position index
        length++;   //  length increase by 1 
        return 1;
    }
    return 0;
}


int search(int item) {
    // write your code here
    for(int i = 0; i<length; i++)   // tracing full array
    {
        if(arr[i] == item)   //  for match item element with array elements 
            return i;   // returns the matching index
    }

    return -1;   //  not found 
}

int search_rev(int item)
{
    for(int i = length-1; i>=0; i--)   // tracing full array
    {
        if(arr[i] == item)   //  matching item with array elements 
            return i;   // returns the matching index
    }

    return -1;   //  not found 
}

int remove_first() {
    // write your code here
    if(length < size && length > 0)   //  condition to see whether the array is full or empty
    {
        for(int i = 0; i < length; i++)   // tracing full array  
        {
            arr[i] = arr[i+1];   //  left shifting
        } 
        length--;   //  length decrease by 1
        return 1;
    }
    return 0;
    
}

int remove_last() {
    // write your code here
    if(length > 0)  //  condition to see whether the array is not empty
    {
        length--;   //  length decrease by 1
        return 1;
    }
    return 0;
    
}

int remove_at(int pos) {
    // write your code here
    if(length < size && pos>=0 && pos <= length)   //  condition to see whether the array is full or not and also checks if the postion is non-negetive and smaller then length
    {
        for(int i = pos; i < length; i++)  // tracing full array from the position index 
        {
            arr[i] = arr[i+1];   //  left shifting
        } 
        length--;   //  length decrease by 1
        return 1;
    }
    return 0;
}

int remove_item_first(int item) {
    // write your code here
    int index = search(item);   // searching the item index
    if(index == -1)  // checking whether the index exits
        return 0;
    for(int i=index; i < length; i++)  // tracing full array from the found index
    {
        arr[i] = arr[i+1];  //  left shifting
    }
    length--;   //  length decrease by 1
    return 1;
}

int remove_item_last(int item) {
    // write your code here
    int index = search_rev(item);   // // searching the item index from the last
    if(index == -1)   // checking whether the index exits
        return 0;
    for(int i=index; i < length; i++)  // tracing full array from the found index
    {
        arr[i] = arr[i+1];   //  left shifting
    }
    length--;   //  length decrease by 1
    return 1;
}

int remove_item_all(int item) {
    // write your code here
    int flag = 0;   //  for checking return condition
    for(int j = 0; j < length; j++)   //  tracing full array
    {
        if(item == arr[j])   //  matching item with array elements   
        {
        for(int i=j; i < length; i++)   //  tracing full array again from the upper array index
            {
                arr[i] = arr[i+1]; //  left shifting
            }
        flag++;  //  for checking return condition
        length--;   //  length decrease by 1
        }
    }
    if(flag > 0)  //  for checking return condition
        return 1;
    return 0;
    
}

int replace(int old_item, int new_item) {
    // write your code here
    int flag = 0;   //  for checking return condition
    for(int j = 0; j < length; j++)   //  tracing full array
    {
        if(old_item == arr[j])   //  matching item with array elements   
        {
            arr[j] = new_item;   //  replacing old item index with new item
            flag++;  //  for checking return condition
        }
    }
    if(flag > 0)  //  for checking return condition
        return 1;
    return 0;
}

void clear() {
    // write your code here
    while(length > 0)  //  loop until the array is empty
        length--;   //  decrease length by 1
}

int main() {
    init(); // initializes the arraylist first
    // test your functions here
    printf("Is full? %d \n", is_full());
    print();
    printf("Is empty? %d \n", is_empty());
    print();
    printf("insert first? %d \n", insert_first(10));
    print();
    printf("insert first? %d \n", insert_first(8));
    print();
    printf("insert first? %d \n", insert_first(16));
    print();
    printf("insert last? %d \n", insert_last(8));
    print();
    printf("insert last? %d \n", insert_last(36));
    print();
    printf("insert at? %d \n", insert_at(23, 2));
    print();
    printf("insert at? %d \n", insert_at(23, 5));
    print();
    printf("insert at? %d \n", insert_at(23, 23));
    print();
    printf("search? %d \n", search(23));
    print();
    printf("search? %d \n", search(24));
    print();
    printf("remove last? %d \n", remove_last());
    print();
    printf("remove first? %d \n", remove_first());
    print();
    printf("remove at? %d \n", remove_at(2));
    print();
    printf("remove item first? %d \n", remove_item_first(8));
    print();
    printf("search? %d \n", search(23));
    print();
    printf("remove item last? %d \n", remove_item_last(23));
    print();
    printf("remove item last? %d \n", remove_item_last(233));
    print();
    printf("insert at? %d \n", insert_at(23, 2));
    print();
    printf("remove item all? %d \n", remove_item_all(23));
    print();
    printf("replace ? %d \n", replace(8, 10));
    print();
    printf("insert first? %d \n", insert_first(16));
    print();
    printf("insert last? %d \n", insert_last(8));
    print();

    clear();
    print();
    
    return 0;
}
