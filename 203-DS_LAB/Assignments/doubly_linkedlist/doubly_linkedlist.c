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
    if(pos<0 || pos>length) {  //  whether position is valid number
        return;
    }
    if(pos == 0) {   //  using insert first when position index is 0
        insert_first(item);
        return;
    }
    if(pos == length) {   //  using delete last when position count is same as length value
        insert_last(item);
        return;
    }
    Node* new_node = (Node*)malloc(sizeof(Node));   //  creating new node
    new_node->data = item;   //  adding data to this new node
    Node* temp = head;
    int i = 0;
    while( i < pos-1)   //  tracing by keeping temp node before the node of given position
    {
        temp = temp->next;
        i++;
    }

    new_node->prev = temp;   //  new node previous pointer to temp 
    new_node->next = temp->next;   //  new node next pointer to temp next
    temp->next->prev = new_node;   //  temp next previous points to new node
    temp->next = new_node;   //  temp next points to new node
    
    length++;   //  length increases
}

int search(int key) {
	// write your code here
    Node* temp = head;
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
	// write your code here
    if(head == NULL)   //  whether the linked list empty or not
        return;
    if(head->next == NULL)   //  whether exists only one node 
    {
        head = NULL;   // head tails both point to NULL
        tail = NULL;
        free(head);
        return;
    }

    Node* temp = head;
    head = temp->next;   //  deletes head node and points to the next node
    head->prev = NULL;   //  head previous becomes NULL
    free(temp);   //  free memory
    length--;   //  length decrease
}

void delete_last() {
	// write your code here
    if(tail == NULL)   //  whether the linked list empty or not
        return;
    if(tail->prev == NULL)   //  whether exists only one node 
    {
        tail = NULL;   // head tails both point to NULL
        head = NULL;   
        free(tail);  //  free tail 
        return;
    }

    Node* temp = tail;
    tail = temp->prev;   //  deletes tail node and points to the previous node
    tail->next = NULL;   //  tail next becomes NULL
    free(temp);    //  free memory
    length--;      //  length decrease

}

void delete_at(int pos) {
	// write your code here
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
    Node* temp = head;
    int i=0;
    while(i < pos-1) {  //  tracing by keeping temp node before the node of given position
        temp = temp->next;
        i++;
    }
    Node* new = temp->next;    //  new node points to temp next
    temp->next = new->next;    //  temp next points to new next pointer
    new->next->prev = temp;    //  new next previous points to temp
    free(new);  //  free new node memory 
    length--;  //  length decrease
}

void delete_item(int item) {
	// write your code here
    int index;
    index = search(item);  //  returns item index
    if (index > 0)   //  whether it returns valid index
    {
        delete_at(index);   //  delete at index position
        return;
    }
    else return;
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
    insert_at(13,1);
    print();
    print_back();
    insert_at(26,2);
    print();
    print_back();
    insert_at(58,5);
    print();
    print_back();
    printf("Search 26: %d\n", search(26));
    delete_first();
    print();
    print_back();
    delete_last();
    print();
    print_back();
    delete_at(3);
    print();
    print_back();
    delete_item(20);
    print();
    print_back();
    

    return 0;
}
