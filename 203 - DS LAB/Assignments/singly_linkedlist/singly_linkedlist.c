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
};

void delete_first() {
    // Write your code here
}

void delete_last() {
    // Write your code here
}

void delete_at(int pos) {
    // Write your code here
}

void delete_item(int item) {
    // Write your code here
}

void insert_before(int oldItem, int newItem) {
    // Write your code here
}

void insert_after(int oldItem, int newItem) {
    // Write your code here
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
    return 0;
}
