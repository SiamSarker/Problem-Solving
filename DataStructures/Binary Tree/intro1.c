#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* root;

Node* newNode(int data){
    Node* temp = (struct Node*) malloc(sizeof(Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return(temp);
}


Node* search(Node *t, int key)
{
    if(t == NULL)
        return NULL;
    if(t->data == key)
        return t;
    Node* temp;
    temp = search(t->left, key);
    if(temp != NULL)
        return temp;
    return search(t->right, key);
}




int delete(int val){

    Node* t = search_Parent(root, val);
    if (t == NULL)
    {
        return -1;
    }

    Node* iChild = t->left;
    Node* rChild = t->right;

    if (t->left != NULL && t->left->data == val)
    {
        if (lChild->left == NULL && lChild->right == NULL;)
        {
            free(lChild);
            t->left = NULL;
            return 1;
        }
        else return -1;
    }

    else{
        if (rChild->left == NULL && rChild->right == NULL;)
        {
            free(rChild);
            t->right = NULL;
            return 1;
        }
        else return -1;
    }
    
    
}



Node* search_Parent(Node *t, int key)
{
    if(t->left != NULL && t->left->data == key)
        return t;
    if(t->right != NULL && t->right->data == key)
        return t;


    Node* temp;
    temp = search(t->left, key);
    if(temp != NULL)
        return temp;
    return search(t->right, key);
}


int insert(int parent, int val, char child){

      Node* t = search(root, parent);
    

      if(t == NULL) return -1;
      if(child == 'l'){
          if(t->left == NULL){
              Node* temp = (Node*) malloc(sizeof(Node));
              temp->left = NULL;
              temp->right = NULL;
              temp->data = val;
              t->left = temp;
              return 1;
          }
          else
          {
              return -1;
          }
          
      }
      else
          {
              if(t->right == NULL){
              Node* temp = (Node*) malloc(sizeof(Node));
              temp->left = NULL;
              temp->right = NULL;
              temp->data = val;
              t->right = temp;
              return 1;
          }
          else
          {
              return -1;
          }
          
          
  }



//   unfinished
//   error on print


void print_list(Node* temp){
  while(temp != NULL){
      printf("%d -> ", temp->data);
      temp = temp->left;
      if(temp->left!= NULL)
        print_list(temp);

        print_list(temp->right);
      
    }
    printf("\n");
  }


int main(void){
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);

    print_list(root);

    getchar();
    return 0;
}