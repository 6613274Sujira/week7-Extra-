//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

typedef struct node{
   struct node* nextPtr;
   int order_number;
   int n;
}order;

typedef order Node;
typedef order* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int od,int q){
  NodePtr new_node=(NodePtr) malloc(sizeof(Node));
  
if(new_node){ 
    new_node->nextPtr = NULL;
    new_node->order_number = od;
    new_node->order_number = q;
    if(*head==NULL) *head = new_node;
    else (*tail) -> nextPtr = new_node;
    *tail = new_node;
 }
}


/*int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int value= t->data;
   //printf("%d\n",value);
   *head = (*head)->nextPtr;
   free(t);
   if(*head == NULL) *tail=NULL;
   return value;
   }
   printf("Empty queue");
   return 0;
}*/



#endif
