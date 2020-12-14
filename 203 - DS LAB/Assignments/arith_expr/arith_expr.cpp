#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0

class Stack
{
    struct Node
    {
        int data;
        struct Node* next;
    };

    struct Node* head;
    int length;

public:
    Stack()
    {
        init();
    }
    void init()
    {
        head = NULL;
        length = 0;
    }
    bool is_empty()
    {
        if(length == 0)
            return true;
        return false;
    }
    void push(int item)
    {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = item;
        newNode->next = head;
        head = newNode;
        length++;
    }
    int pop()
    {
        struct Node* temp = head;
        int ret = temp->data;
        head = head->next;
        free(temp);
        length--;
        return ret;
    }
    int peek()
    {
        return head->data;
    }
    void print()
    {
        struct Node* temp = head;
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
};

int applyOp(int val1, int val2, char op)
{
    if(op == '+')
        return val1 + val2;
    else if(op == '-')
        return val1 - val2;
    else if(op == '*')
        return val1 * val2;
    else if(op == '/')
        return val1 / val2;
}


int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);

    Stack val_stack;
    Stack op_stack;

	// setp 1:
    for(int i=0; i<len; i++)
    {
        char token = str[i];

        if('0' <= token && token <= '9')
        {
			// write your code here
        }
        else if(token == '(')
        {
			// write your code here
        }
        else if(token == ')')
        {
			// write your code here
        }
        else if(token == '+')
        {
			// write your code here
        }
        else if(token == '-')
        {
			// write your code here
        }
        else if(token == '*')
        {
			// write your code here
        }
        else if(token == '/')
        {
			// write your code here
        }
    }
    
	// step 2:
	while(!op_stack.is_empty())
    {
		// write your code here
    }
    
	// step 3:
	printf("%d", val_stack.pop());

    return 0;
}
