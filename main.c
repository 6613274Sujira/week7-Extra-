#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
   //int x;
 // 5 x 9  x 7 x 8 2 x
/*
  enqueue(&headPtr,&tailPtr,5);
  enqueue(&headPtr,&tailPtr,6);
  enqueue(&headPtr,&tailPtr,7);
  //enqueue(&headPtr,&tailPtr,9);
  x = dequeue(&headPtr,&tailPtr);
  printf("%d\n",x);
  x = dequeue(&headPtr,&tailPtr);
  printf("%d\n",x);
  x = dequeue(&headPtr,&tailPtr);
  printf("%d\n",x);*/

  //For struct Queue
  
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;/*
   int i;
   enqueue_struct(&q,8);
   enqueue_struct(&q,9);
   enqueue_struct(&q,10);
   printf("%d\n",dequeue_struct(&q));
   printf("%d\n",dequeue_struct(&q));
   printf("%d\n",dequeue_struct(&q));*/

   int i,x, count;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            if (q.size == 0)
            {
              printf("the queue is empty\n");
            }
            x=dequeue_struct(&q);
            // printf("%d, size = %d\n", x, q.size);
            // if(x==0) 
              // printf("Empty queue\n");
            // else
              // printf("dequeing %d\n",x);
            
        }
        else {
       enqueue_struct(&q, atoi(argv[i]),atoi(argv[i+1]));
        i += 1;
      
           
        }
 }
  return 0;
}
