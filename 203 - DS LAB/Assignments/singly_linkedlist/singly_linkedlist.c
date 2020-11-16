#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;
int length;

void init() {
    head = NULL;
    length = 0;
}

void insert_first(int item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    // linking
    newNode->next = head;
    head = newNode;
    length++;
}

void insert_last(int item) {
    if(head == NULL) {
        insert_first(item);
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    // linking
    struct Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    newNode->next = NULL;
    temp->next = newNode;
    length++;
}

void insert_at(int item, int pos) {
    if(pos<0 || pos>length) {
        return;
    }
    if(pos == 0) {
        insert_first(item);
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    // linking
    struct Node* temp = head;
    int i=0;
    while(i < pos-1) {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    length++;
}

int search(int key) {
    // Write your code here
    struct Node* temp = head;
    int index = 0;
    //  traversing full linked list
    while (temp != NULL)   
    {
    if (temp->data == key)   //  check whether node data equals to given key
    {
      return index;   //  returns key index
    }
    temp = temp->next;  //  goes to next node 
    index++;
    }
    return -1;
}

void delete_first() {
    // Write your code here
    if(head == NULL) {
        return;
    }
    struct Node* temp;
    temp = head;
    head = temp->next;   //  deletes head node and points to the next node
    length--;
    free(temp);   //  free temp node
}

void delete_last() {
    // Write your code here
    if(head == NULL) {   //  whether the linked list empty or not
        return;
    }
    struct Node* temp = head;
    if(temp->next == NULL)   //  whether exists only one node 
    {
        delete_first();
        return;
    }
    while(temp->next->next != NULL) {   //  tracing by keeping temp node before the last node
        temp = temp->next;
    }
    free(temp->next);  //  free last node 
    temp->next = NULL;
    length--;
}

void delete_at(int pos) {
    // Write your code here
    if(pos<0 || pos>length) {   //  whether position is valid number
        return;
    }
    if(pos == 0) {   //  using delete first when position index is 0
        delete_first();
        return;
    }
    if(pos == length-1) {   //  using delete last when position count is same as length value
        delete_last();
        return;
    }
    struct Node* temp = head;
    int i=0;
    while(i < pos-1) {  //  tracing by keeping temp node before the node of given position
        temp = temp->next;
        i++;
    }
    struct node* new = temp->next->next;
    free(temp->next);  //  free memory 
    temp->next = new;
    length--;
}

void delete_item(int item) {
    int index;
    index = search(item);  //  returns item index
    if (index > 0)   //  whether it returns valid index
    {
        delete_at(index);   //  delete at index position
        return;
    }
    else return;
}

void insert_before(int oldItem, int newItem) {
    // Write your code here
    int index = search(oldItem);   //  returns OldItem index
    if (index > 0)   //  whether it returns valid index
    {
        insert_at(newItem, index);   //  insert new item at index position
        return;
    }
    else return;

}

void insert_after(int oldItem, int newItem) {
    // Write your code here
    int index = search(oldItem);   //  returns OldItem index
    if (index > 0)   //  whether it returns valid index
    {
        insert_at(newItem, index+1);   //  insert new item after index position
        return;
    }
    else return;
}

void print() {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    init();
    insert_first(37);
    insert_first(42);
    insert_first(56);
    insert_last(5);
    print();
    delete_first();
    print();
    delete_last();
    print();
    insert_last(23);
    insert_last(34);
    print();
    delete_at(2);
    print();
    delete_item(37);
    print();
    insert_last(43);
    print();
    insert_before(34,23);
    print();
    insert_after(23,65);
    print();
    return 0;
}
