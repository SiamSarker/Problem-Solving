#include <stdio.h>
#include <stdlib.h>
#define NULL 0
 
typedef struct treeNode{
    int data;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;
 
class BST {
    treeNode* create_Node(int value){
        treeNode* newNode = (treeNode*) malloc(sizeof(treeNode));
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
public:
    treeNode* root;
    BST() {
        init();
    }
    void init() {
        root = NULL;
    }
    treeNode* search_iterative(int key) {
        treeNode* temp = root;
        while(temp != NULL) {
            if(temp->data == key)
                return temp;
            else if(temp->data > key) {
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
        }
        return NULL;
    }
    void insert_iterative(int value) {
        if(root == NULL) {
            treeNode* newNode = create_Node(value);
            root = newNode;
            return;
        }
        treeNode* temp = root;
        while(1) {
            if(temp->data > value) {
                if(temp->left == NULL) {
                    treeNode* newNode = create_Node(value);
                    temp->left = newNode;
                    return;
                }
                else {
                    temp = temp->left;
                }
            }
            else {
                if(temp->right == NULL) {
                    treeNode* newNode = create_Node(value);
                    temp->right = newNode;
                    return;
                }
                else {
                    temp = temp->right;
                }
            }
        }
    }
    void print_tree(treeNode* t, int depth){
        if(t == NULL)
            return;
        // print right sub tree
        print_tree(t->right, depth+1);
        // print node
        for(int i=0; i<depth; i++)
            printf("\t");
        printf("%d---------------------------------\n", t->data);
        // print left sub tree
        print_tree(t->left, depth+1);
    }
    void inorder(treeNode* t) {
        if(t == NULL)
            return;
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }
};
 
int main(){
    BST t;
    t.insert_iterative(25);
    t.insert_iterative(13);
    t.insert_iterative(47);
    t.insert_iterative(19);
    t.insert_iterative(31);
    t.insert_iterative(65);
    t.insert_iterative(73);
    t.insert_iterative(44);
    t.insert_iterative(29);
    t.insert_iterative(25);
    t.print_tree(t.root, 0);
 
    treeNode* n = t.search_iterative(44);
    if(n != NULL) {
        printf("%d\n", n->data);
    }
    else {
        printf("Not found\n");
    }
    t.inorder(t.root);
 
    return 0;
}