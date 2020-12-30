#include<stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node* root;

void init(){
    root = NULL;
}

Node* createNode(int value){
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert_root (int value)
{
    if(root != NULL)
        return;
    root = createNode(value);
}


Node* search(Node* t, int key){
    // if empty node returns
    if (t == NULL) return NULL;

    // search in node. if found return node
    if(t->data == key)
        return t;

    Node* temp;
    // else search left sub-tree, if found return node
    temp = search(t->left, key);
    if(temp != NULL)
        return temp;

    // else search right sub-tree. return whatever you find
    temp = search(t->right,key);
    return temp;
}


void insert(int parent, char type, int value){
    Node* t = search(root, parent);
    if(t == NULL) return;

    if(type == '1' && t->left == NULL){
        Node* n = createNode(value);
        t->left = n;
    }
    else if(type == '2' && t->right == NULL){
        Node* n = createNode(value);
        t->right = n;
    }

}

void print_tree(Node* t, int depth){
    if (t == NULL)
        return;
    print_tree(t->right, depth+1);
    for (int i = 0;i < depth; i++)
        printf("\t");
    printf("%d------------------\n", t->data);
    print_tree(t->left, depth+1);
}




int main(){
    
    init();
    insert_root(5);
    insert(5,'l',10);
    insert(5,'r',17);
    insert(10,'l',12);
    insert(17,'r',7);
    insert(17,'l',14);
    insert(14,'r',28);
    print_tree(root, 0);

    return 0;
}