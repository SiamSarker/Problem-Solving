#include <stdio.h>
#include <stdlib.h>


// -> 1.Insert First
// -> 2.Insert Last
// -> 3.Delete First 
// -> 4.Delete Last
// -> 5.Search
// -> 6.Insert After
// -> 7.Insert Any Position
// -> 8.Delete Item
// -> 9.Stack push
// -> 10.Stack pop
// -> 11.Enqueue
// -> 12.Dequeue



typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node* head;
Node* tail;
void init(){
  head = NULL;
  tail = NULL;
}

// 1. inset first and push for stack 

int insert_first(int item){
  Node* temp = (Node*) malloc(sizeof(Node));
  temp->data = item;
  temp->next = head;
  head = temp;
  return 1;
}




// 2. insert last or Enqueue

int insert_last(int item){
  Node* temp = head;
  if (temp == NULL){
    Node* temp2 = (Node*) malloc(sizeof(Node));
    temp2->data = item;
    temp2->next = NULL;
    head = temp2;
  }
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  Node* temp2 = (Node*) malloc(sizeof(Node));
  temp2->data = item;
  temp->next = temp2;
  temp2->next = NULL;
  return 1;
}

// 3. delete first and pop and Dequeue

int delete_first(){
  Node* temp = head;
  if (head == NULL)
  {
    return -1;
  }
  
  head = temp->next;
  free(temp);
  return 1;
}


// 4. delete last

int delete_last(){
  Node *temp = head;
  Node *prev;
  if (head == NULL)
  {
    return -1;
  }
  
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }
  if (temp == head)
  {
    head = NULL;
  }
  else
  {
    prev->next = NULL;
  }
  free(temp);
  
}

// 5. Search

Node* search(int item){
  Node*temp = head;
  while (temp != NULL)
  {
    if (temp->data == item)
    {
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

// 6. Insert After

int insert_after(int prev_item, int new_item){
  Node *temp = search(prev_item);
  if (temp == NULL)
    return -1;
  Node* newNode = (Node*) malloc(sizeof(Node));
  newNode->data = new_item;
  newNode->next = temp->next;
  temp->next = newNode;
  return 1;
}


// 7. Insert any position

int insert_at(int item, int pos){
  if(pos == 0) return insert_first(item);
  int i = 0;
  Node* temp = head;
  while (temp != NULL)
  {
    if(i == pos-1) break;
    temp = temp->next;
    i++;
  }
  if (i != pos-1) return -1;
  Node* newNode = (Node*) malloc(sizeof(Node));
  newNode->data = item;
  newNode->next = temp->next;
  temp->next = newNode;
  return 1;
}


// 8. Delete item

int delete_item(int item){
  Node *temp = head;
  Node *prev;

  while (temp != NULL)
  {
    if(temp->data == item) break;
    prev = temp;
    temp = temp->next;
  }

  if (head == NULL)
    return -1;
  if(temp == head) 
    return delete_first();
  
  prev->next = temp->next;
  free(temp);

}



// 9. Stack push

int push(int item){
  Node* temp = (Node*) malloc(sizeof(Node));
  temp->data = item;
  temp->next = head;
  head = temp;
  return 1;
}

// 10. Stack pop

int pop(){
  Node* temp = head;
  if (head == NULL)
  {
    return -1;
  }
  
  head = temp->next;
  free(temp);
  return 1;
}


// 11. Enqueue

int enqueue(int item){
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = item;
  newNode->next = NULL;
  Node* temp = tail;
  if(head == tail){
    head = newNode;
    tail = newNode;
  }

  temp->next = newNode;
  tail = newNode;
  return 1;

}

// 12. Dequeue

int dequeue(){
  Node* temp = head;
  if(head == NULL) return -1;
  if(head == tail){
    tail = NULL;
  }
  head = temp->next;
  return(head->data);
  free(temp);
  
}



void print_list(){
  Node* temp = head;
  while(temp != NULL){
    printf("%d -> ", temp->data);
      temp = temp->next;
    }
    printf("\n");
  }





int main() {
  printf("Hello World\n");
  int k = insert_first(5);
  print_list();
  k = insert_first(3);
  print_list();

  return 0;
}
