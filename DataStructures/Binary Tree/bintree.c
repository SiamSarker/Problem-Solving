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

int delete_root()
{
    if(root == NULL)
        return -1;
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
        root = NULL;
        return 1;
    }
    return -1;
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

void preorder(treeNode* t)
{
    if(t == NULL)
        return;
    // root, left_subtree, right_subtree
    printf("%d ", t->data);
    preorder(t->left);
    preorder(t->right);
}

void inorder(treeNode* t)
{
    if(t == NULL)
        return;
    // left_subtree, root, right_subtree
    inorder(t->left);
    printf("%d ", t->data);
    inorder(t->right);
}

void postorder(treeNode* t)
{
    if(t == NULL)
        return;
    // left_subtree, right_subtree, root
    postorder(t->left);
    postorder(t->right);
    printf("%d ", t->data);
}

int main()
{
    init();
    while(1)
    {
        int x;
        printf("Insert option:\n1. Print Tree 2. Search 3. Insert root 4. Insert\n\
5. Delete root 6. Delete\n7. Preorder 8. Inorder 9. Postorder\n");
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
            treeNode* temp = search(root, key);
            if(temp != NULL)
                printf("%d found\n", key);
            else
                printf("%d not found\n", key);
            break;
        case 3:
            printf("Insert as root: ");
            int val;
            scanf("%d", &val);
            int a = insert_root(val);
            if(a == 1)
                printf("Successfully inserted %d as root\n", val);
            else
                printf("Insertion unsuccessful\n");
            break;
        case 4:
            printf("Insert: ");
            int parent, child;
            scanf("%d", &val);
            printf("Parent: ");
            scanf("%d", &parent);
            printf("Child: (1 for left, 2 for right) ");
            scanf("%d", &child);
            a = insert(val, parent, child);
            if(a == 1)
                printf("Successfully inserted %d\n", val);
            else
                printf("Insertion unsuccessful\n");
            break;
        case 5:
            a = delete_root();
            if(a == 1)
                printf("Successfully deleted root\n");
            else
                printf("Deletion unsuccessful\n");
            break;
        case 6:
            printf("Delete: ");
            scanf("%d", &val);
            a = delete_value(val);
            if(a == 1)
                printf("Successfully deleted %d\n", val);
            else
                printf("Deletion unsuccessful\n");
            break;
        case 7:
            preorder(root);
            printf("\n");
            break;
        case 8:
            inorder(root);
            printf("\n");
            break;
        case 9:
            postorder(root);
            printf("\n");
            break;
        }
    }
    return 0;
}
