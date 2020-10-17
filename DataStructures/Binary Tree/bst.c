#include <stdio.h>
#include <stdlib.h>

typedef struct bstNode {
    int data;
    struct bstNode* left;
    struct bstNode* right;
} bstNode;

bstNode* root;

void init() {
    root = NULL;
}

bstNode* search(bstNode* t, int key) {
    if(t == NULL)
        return NULL;

    if(t->data == key)
        return t;
    else if(t->data > key)
        return search(t->left, key);
    else
        return search(t->right, key);
}

int insert(bstNode* t, int val) {
    if(root == NULL) {
        bstNode* temp = (bstNode*)malloc(sizeof(bstNode));
        temp->left = NULL;
        temp->right = NULL;
        temp->data = val;
        root = temp;
        return 1;
    }
    if(t->data > val) {
        if(t->left == NULL) {
            bstNode* temp = (bstNode*)malloc(sizeof(bstNode));
            temp->left = NULL;
            temp->right = NULL;
            temp->data = val;
            t->left = temp;
            return 1;
        }
        else
            return insert(t->left, val);
    }
    else {
        if(t->right == NULL) {
            bstNode* temp = (bstNode*)malloc(sizeof(bstNode));
            temp->left = NULL;
            temp->right = NULL;
            temp->data = val;
            t->right = temp;
            return 1;
        }
        else
            return insert(t->right, val);
    }
}

void replace(bstNode* t, bstNode* pt, bstNode* t_new) {
    if(pt == NULL) // Only root's parent is NULL
        root = t_new;
    else if(t == pt->left)
        pt->left = t_new;
    else if(t == pt->right)
        pt->right = t_new;
}

int delete_value(bstNode* t, bstNode* pt, int val) {
    if(t == NULL) // Item not found
        return -1;

    if(t->data == val) { // Item found
        if(t->left == NULL) {
            if(t->right == NULL) { // Case 1: Has no child
                replace(t, pt, NULL);
                free(t);
            }
            else { // Case 2: Has only right child
                replace(t, pt, t->right);
                free(t);
            }
        }
        else if(t->right == NULL) { // Case 2: Has only left child
            replace(t, pt, t->left);
            free(t);
        }
        else { // Case 3: Has both child
            bstNode* successor = t->right; // Go right once
            while(successor->left != NULL) // Then go left as long as possible
                successor = successor->left;
            t->data = successor->data; // Replace with successor data
            return delete_value(t->right, t, successor->data); // Delete successor
        }
    }
    else if(t->data > val) // Look for item in left-subtree
        return delete_value(t->left, t, val);
    else // Look for item in right-subtree
        return delete_value(t->right, t, val);
}

void print_tree_rec(bstNode* t, int d)
{
    if(t == NULL)
        return;
    print_tree_rec(t->right, d+1);
    for(int i=0; i<d; i++)
    {
        printf("\t");
    }
    printf("%d\n", t->data);
    print_tree_rec(t->left, d+1);
}

void print_tree()
{
    printf("************************\n");
    print_tree_rec(root, 0);
    printf("************************\n");
}

int main()
{
    init();
    while(1)
    {
        int x;
        printf("Insert option:\n1. Print Tree 2. Search 3. Insert 4.Delete\n");
        scanf("%d", &x);

        switch(x)
        {
        case 1:
            print_tree();
            break;
        case 2:
            printf("Search for: ");
            int key;
            scanf("%d", &key);
            bstNode* temp = search(root, key);
            if(temp != NULL)
                printf("%d found\n", key);
            else
                printf("%d not found\n", key);
            break;
        case 3:
            printf("Insert: ");
            int val;
            scanf("%d", &val);
            int a = insert(root, val);
            if(a == 1)
                printf("Successfully inserted %d\n", val);
            else
                printf("Insertion unsuccessful\n");
            break;
        case 4:
            printf("Delete: ");
            scanf("%d", &val);
            a = delete_value(root, NULL, val);
            if(a == 1)
                printf("Successfully deleted %d\n", val);
            else
                printf("Deletion unsuccessful\n");
            break;
        }
    }
    return 0;
}
