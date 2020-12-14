#include <stdio.h>
#include <stdlib.h>

class Stack
{
    struct Node
    {
        int data;
        struct Node *next;
    };

    struct Node *head;
    int length;

public:
    Stack()
    {
        init();
    }

    void init()
    {
        head = NULL;
    }

    void push(int iteam)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = iteam;
        newNode->next = head;
        head = newNode;
        length++;
    }

    int pop()
    {
        struct Node *temp = head;
        int ret = temp->data;
        head = head->next;
        free(temp);
        length--;
        return ret;
    }

    bool isEmpty()
    {
        if(length == 0)
            return true;
        return false;
    }

    void printStack()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
};

class Queue
{
    struct Node
    {
        int data;
        struct Node *next;
    };

    struct Node *head;
    struct Node *tail;
    int length;

public:
    Queue()
    {
        init();
    }
    void init()
    {
        head = NULL;
        tail = NULL;
        length = 0;
    }

    void enqueue(int iteam)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = iteam;
        newNode->next = NULL;
        if (head == NULL)
            head = newNode;
        else
            tail->next = newNode;
        tail = newNode;
        length++;
    }

    int dequeue()
    {
        struct Node *temp = head;
        int ret = temp->data;
        head = head->next;
        if (head == tail)
            tail = NULL;
        free(temp);
        length--;
        return ret;
    }
    
    bool isEmpty()
    {
        if(length == 0)
            return true;
        return false;
    }

    void printStack()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
};

int main()
{
    Queue q;
    q.enqueue(15);
    q.printStack();
    q.enqueue(17);
    q.printStack();
    q.enqueue(19);
    q.printStack();
    q.enqueue(23);
    q.printStack();
    
     Stack s;
     while(q.isEmpty() == false){
         s.push(q.dequeue());
     }
     while(s.isEmpty() == false){
         q.enqueue(s.pop());
     }
     q.printStack();
     s.printStack();
     return 0;
}