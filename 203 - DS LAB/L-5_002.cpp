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
    }

    int pop()
    {
        struct Node *temp = head;
        int ret = temp->data;
        head = head->next;
        free(temp);
        return ret;
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
    Stack S;
    S.init();
    S.push(15);
    S.printStack();
    S.push(45);
    S.printStack();
    S.push(23);
    S.printStack();
    S.push(49);
    S.printStack();
    printf("%d has popped\n", S.pop());
    S.printStack();
    printf("%d has popped\n", S.pop());
    S.printStack();
}