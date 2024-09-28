#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0

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
        length = 0;
    }
    bool is_empty()
    {
        if (length == 0)
            return true;
        return false;
    }
    void push(int item)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = item;
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
    int peek()
    {
        return head->data;
    }
    void print()
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

int applyOp(int val1, int val2, char op)
{
    if (op == '+')
        return val1 + val2;
    else if (op == '-')
        return val1 - val2;
    else if (op == '*')
        return val1 * val2;
    else if (op == '/')
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
    for (int i = 0; i < len; i++)
    {
        char token = str[i];

        if ('0' <= token && token <= '9')
        {
            // write your code here
            val_stack.push(token-'0');      // pushing integer value to the value stack by subtracting '0' from the found character
        }
        else if (token == '(')
        {
            // write your code here
            op_stack.push(token);       //  pushing character operation to the operation stack
        }
        else if (token == ')')
        {
            // write your code here
            while (op_stack.peek() != '(')       //   loop continues till found '(' char in the operation stack
            {
                char op = op_stack.pop();        //   poping a char from the operation stack
                int a = val_stack.pop();        //   poping an integer from the value stack
                int b = val_stack.pop();        //   poping another integer from the value stack
                int result = applyOp(b, a, op);    //  b value added before a value in the stack, so sending b first would be correct oreder and it returns an integer result
                val_stack.push(result);          // pushing the integer value to the value stack
            }
            op_stack.pop();         //   poping a char from operation stack to discard
        }
        else if (token == '+')
        {
            // write your code here
            while (op_stack.is_empty() == false && op_stack.peek() != '(')      //   for checking whether the stack is not empty and loop continues till found '(' char in the operation stack
            {
                char op = op_stack.pop();       //   poping a char from the operation stack
                int a = val_stack.pop();        //   poping an integer from the value stack
                int b = val_stack.pop();        //   poping another integer from the value stack
                int result = applyOp(b, a, op);     //  b value added before a value in the stack, so sending b first would be correct oreder and it returns an integer result
                val_stack.push(result);     // pushing the integer value to the value stack
            }
            op_stack.push('+');         //   pushing this operation char to the operation character
        }
        else if (token == '-')
        {
            // write your code here
            while (op_stack.is_empty() == false && op_stack.peek() != '(')      //   for checking whether the stack is not empty and loop continues till found '(' char in the operation stack
            {
                char op = op_stack.pop();       //   poping a char from the operation stack
                int a = val_stack.pop();        //   poping an integer from the value stack
                int b = val_stack.pop();        //   poping another integer from the value stack
                int result = applyOp(b, a, op);     //  b value added before a value in the stack, so sending b first would be correct oreder and it returns an integer result
                val_stack.push(result);         // pushing the integer value to the value stack
            }
            op_stack.push('-');         //   pushing this operation char to the operation character
        }
        else if (token == '*')
        {
            // write your code here
            while (op_stack.is_empty() == false && op_stack.peek() == '*')      //   for checking whether the stack is not empty and loop continues if found '*' char in the operation stack
            {
                char op = op_stack.pop();       //   poping a char from the operation stack
                int a = val_stack.pop();        //   poping an integer from the value stack
                int b = val_stack.pop();        //   poping another integer from the value stack
                int result = applyOp(b, a, op);     //  b value added before a value in the stack, so sending b first would be correct oreder and it returns an integer result
                val_stack.push(result);     // pushing the integer value to the value stack
            }
            op_stack.push('*');         //   pushing this operation char to the operation character
        }
        else if (token == '/')
        {
            // write your code here
            while (op_stack.is_empty() == false && op_stack.peek() == '/')          //   for checking whether the stack is not empty and loop continues if found '/' char in the operation stack
            {
                char op = op_stack.pop();       //   poping a char from the operation stack
                int a = val_stack.pop();        //   poping an integer from the value stack
                int b = val_stack.pop();        //   poping another integer from the value stack
                int result = applyOp(b, a, op);         //  b value added before a value in the stack, so sending b first would be correct oreder and it returns an integer result
                val_stack.push(result);         // pushing the integer value to the value stack
            }
            op_stack.push('/');         //   pushing this operation char to the operation character
        }
    }

    // step 2:
    while (!op_stack.is_empty())
    {
        // write your code here
        char op = op_stack.pop();       //   poping a char from the operation stack
        int a = val_stack.pop();        //   poping an integer from the value stack
        int b = val_stack.pop();        //   poping another integer from the value stack
        int result = applyOp(b, a, op);     //  b value added before a value in the stack, so sending b first would be correct oreder and it returns an integer result
        val_stack.push(result);         // pushing the integer value to the value stack
    }

    // step 3:
    printf("%d\n", val_stack.pop());     //  printing the value from value stack

    return 0;
}
