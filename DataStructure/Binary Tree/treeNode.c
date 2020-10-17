#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode
{
    int data;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;

treeNode* root;

void init()
{
    root = NULL;
}

int insert_root(int val)
{
    if(root == NULL)
    {
        treeNode* temp = (treeNode*)malloc(sizeof(treeNode));
        temp->left = NULL;
        temp->right = NULL;
        temp->data = val;
        root = temp;
        return 1;
    }
    return -1;
}

treeNode* search(treeNode* t, int key)
{
    if(t == NULL)
        return NULL;
    if(t->data == key)
        return t;
    treeNode* temp;
    temp = search(t->left, key);
    if(temp != NULL)
        return temp;
    return search(t->right, key);
}

int insert(int val, int parent, int child)
{
    treeNode* t = search(root, parent);
    if(t == NULL) return -1;
    if(child == 1)
    {
        if(t->left == NULL)
        {
            treeNode* temp = (treeNode*)malloc(sizeof(treeNode));
            temp->left = NULL;
            temp->right = NULL;
            temp->data = val;
            t->left = temp;
            return 1;
        }
        else
            return -1;
    }
    else
    {
        if(t->right == NULL)
        {
            treeNode* temp = (treeNode*)malloc(sizeof(treeNode));
            temp->left = NULL;
            temp->right = NULL;
            temp->data = val;
            t->right = temp;
            return 1;
        }
        else
            return -1;
    }
}




treeNode* search_Parent(treeNode* t, int key)
{
    if(t == NULL)
        return NULL;
    if(t->left != NULL && t->left->data == key)
        return t;
    if(t->right != NULL && t->right->data == key)
        return t;
    treeNode* temp;
    temp = search_Parent(t->left, key);
    if(temp != NULL)
        return temp;
    return search_Parent(t->right, key);
}

int delete_value(int val)
{
    treeNode* t = search_Parent(root, val);
    if(t == NULL)	return -1;
    treeNode* lChild = t->left;
    treeNode* rChild = t->right; 
    if(lChild != NULL && lChild->data == val)
    {
        if(lChild->left == NULL && lChild->right == NULL)
        {
            free(lChild);
            t->left = NULL;
            return 1;
        }
        return -1;
    }
    else
    {
        if(rChild->left == NULL && rChild->right == NULL)
        {
            free(rChild);
            t->right = NULL;
            return 1;
        }
        return -1;
    }
}


int height(treeNode* t){
    if (t == NULL)
        return -1;
    
    int l = height(t->left);
    int r = height(t->right);
    if(l > r) return l+1;
    else return r+1;
    
}



void print_tree_rec(treeNode* t, int d)
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
    insert_root(2);
    print_tree();
    insert(4, 2, 1);
    print_tree();
    insert(6, 2, 2);
    print_tree();
    insert(14, 6, 1);
    print_tree();
    insert(8, 4, 2);
    print_tree();
    insert(3, 8, 1);
    print_tree();
    insert(5, 8, 2);
    print_tree();
    insert(5, 2, 1);
    print_tree();

    return 0;
}
