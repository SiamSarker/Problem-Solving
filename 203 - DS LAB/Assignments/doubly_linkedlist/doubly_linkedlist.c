#include <stdio.h>
#include <stdlib.h>
#define NULL 0

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
} Node;
Node* head;
Node* tail;
int length;

void init() {
    head = NULL;
    tail = NULL;
    length = 0;
}

void insert_first(int item) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = item;
    new_node->prev = NULL;
    new_node->next = head;
    if(head != NULL)
        head->prev = new_node;
    else
        tail = new_node;
    head = new_node;
    length++;
}

void insert_last(int item) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = item;
    new_node->next = NULL;
    new_node->prev = tail;
    if(tail != NULL)
        tail->next = new_node;
    else
        head = new_node;
    tail = new_node;
    length++;
}

void insert_at(int item, int pos) {
	// write your code here
    if(pos<0 || pos>length) {
        return;
    }
    if(pos == 0) {
        insert_first(item);
        return;
    }
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = item;
    Node* temp = head;
    int i = 0;
    while( i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next->prev;
    temp->next = new_node->prev;
    temp = new_node;
    length++;
}

int search(int key) {
	// write your code here
}

void delete_first() {
	// write your code here
}

void delete_last() {
	// write your code here
}

void delete_at(int pos) {
	// write your code here
}

void delete_item(int item) {
	// write your code here
}

void print() {
    Node* temp = head;
    while(temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void print_back() {
    Node* temp = tail;
    while(temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    init();
    insert_last(30);
    print();
    print_back();
    insert_last(20);
    print();
    print_back();
    insert_last(10);
    print();
    print_back();
    insert_at(13,0);
    print();
    print_back();
    return 0;
}
