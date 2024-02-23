
// typedef struct Queue{
//    order *head,*tail;
//     int size;
// }order;

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int od,int qu){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number = od;
  new_node->n = qu;
  if(q->size==0)
        q->headPtr = new_node;
  else q->tailPtr->nextPtr = new_node;
  q->tailPtr=new_node;
  q->size++;
  printf("My order is %d\n",od);
 }
}


int dequeue_struct(Queue *q){
  char name[50];
  int price = 0;
  int cash = 0;
  int static count = 1;
   NodePtr t=q->headPtr;
   if(t){
   int value= t->order_number;
   switch(value){
    case 1 : price = t->n*100; strcpy(name,"Ramen"); break;
    case 2 : price = t->n*20; strcpy(name,"Somtam"); break;
    case 3 : price = t->n*50; strcpy(name,"Fried Chicken"); break;
    default : printf("No Food\nThank you\n");
   }
  //  printf("value = %d\n", value);
    q->headPtr = t->nextPtr;
    if(q->size==1)
      q->tailPtr=NULL;
    q->size--;
  if (value == 1 || value == 2 || value == 3)
  {
    printf("Customer No.%d\n", count++);
    printf("%s\n",name);
    printf("You have to pay %d\n", price);
    while (1)
    {
      printf(":");
      scanf("%d", &cash);
      if (cash == price)
      {
        printf("Thank you\n");
        break;
      }
      else if (cash > price)
      {
        printf("Thank you\n");
        printf("Change is = %d\n", cash - price);
        break;
      }
    }
    free(t);
    return (value);
  }
   }
   //printf("Empty queue");
   return 0;
}

