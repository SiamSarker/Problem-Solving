#include<stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

struct Node* head;
int length;

void init() {
    head = NULL;
}

void push(int iteam){
    struct Node* newNode =(struct Node*) malloc(sizeof(struct Node));
    newNode->data = iteam;
    newNode->next = head;
    head = newNode;
}

int pop(){
    struct Node* temp = head;
    int ret = temp->data;
    head =  head->next;
    free(temp);
    return ret;
}

void printStack(){
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}

int main() {
    init();
    push(15);
    printStack();
    push(45);
    printStack();
    push(23);
    printStack();
    push(49);
    printStack();
    printf("%d has popped\n", pop());
    printStack();
    printf("%d has popped\n", pop());
    printStack();

    }