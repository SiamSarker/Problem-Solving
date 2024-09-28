#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;
int length;

void init()
{
    head = NULL;
    length = 0;
}

void insert_first(int item)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    // linking
    newNode->next = head;
    head = newNode;
    length++;
}

void insert_last(int item)
{
    if(head == NULL)
    {
        insert_first(item);
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    // linking
    struct Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    newNode->next = NULL;
    temp->next = newNode;
    length++;
}

void insert_at(int item, int pos)
{
    if(pos<0 || pos>length)
    {
        return;
    }
    if(pos == 0)
    {
        insert_first(item);
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    // linking
    struct Node* temp = head;
    int i=0;
    while(i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    length++;
}

int search(int key)
{
    struct Node* temp = head; //creating new node.pointing temp to head
    int x=0; //taking integer
    while(temp != NULL) //while loop,until temp=Null
    {
        if(key == temp-> data) //checking if key is equal node data
        {
            return x;
        }
        x++;
        temp = temp->next; // tracing the linked list
    }
    if(x == length)  //  checking if any value is not found
    {
        return (-1);
    }


};

void delete_first()
{
    struct Node* temp = head;   //creating new node.pointing temp to head
    if(temp!=NULL)  //while loop,until temp=Null
    {
        temp = temp->next;    // tracing the linked list
    }
    free(temp); //for clearing space
    length--;
}

void delete_last()
{
    if(head == NULL)  // checking if the linked list is empty
    {
        delete_first();
        return;
    }
    if(head->next == NULL)  //  checking if the linked list has only one element
    {
        delete_first();
    }
    // linking
    struct Node* temp = head;  //creating new node.pointing temp to head
    while(temp->next->next != NULL)   //while loop,until temp->next->next =Null
    {
        temp = temp->next;   // tracing the linked list
    }
    temp->next = NULL;
    length--;
}

void delete_at(int pos)
{
    if(pos<0 || pos>length)   //  checking if the position is valid
    {
        return;
    }
    if(pos == 0)  //  if it is in the first index 
    {
        delete_first();
        return;
    }
    // linking
    struct Node* temp = head;   //creating new node.pointing temp to head
    int i=0;
    while(i < pos-1)  //  checking if i stays before the given position index
    {
        temp = temp->next;   // tracing the linked list
        i++;
    }
    temp->next = temp->next->next;   //  linking the next next index node with the temp node
    length--;

}

void delete_item(int item)
{
    int y=search(item);  // searching the index
    delete_at(y);  // delete at that index
}

void insert_before(int oldItem, int newItem)
{
    int z=search(oldItem);  // searching the index
    insert_at(newItem,z);   // insert before the index
}

void insert_after(int oldItem, int newItem)
{
    int z=search(oldItem);  // searching the index
    if(z!= -1)
    {
        insert_at(newItem,z+1);  // insert after the index
    }

}

void print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    init();
    return 0;
}