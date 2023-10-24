#include<stdio.h>
#include<stdlib.h>
#define N 4
int queue [N];
int x;
int front=-1;
int rear=-1;
//Insertion in Queue
void enqueue(int data){
    if((rear+1)%N==front) printf("\nOverflow");
    else if ( front ==-1 && rear==-1)
    {
        front = rear=0;
        queue[rear]=data;
    } else{
        rear=(rear+1)%N;
        queue[rear]=data;
    }
    
}
//Deletion from Queue
void dequeue(){
    if(front ==-1&& rear ==-1) printf("Underflow");
    else if (front == rear)
    {
        front = rear=-1;
    } else {
        front=(front+1)%N;
    }
}

//Displaying the Queue
void display(){
    int i=front;
    if(front ==-1&& rear ==-1) printf("Empty");
    else{
       printf("Queue is:\n");
      for(int i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
        front=(front+1)%N;
      }
       
    }
}
void main(){
     int ch;
    do{
    printf("\nEnter your choice:\n 1.Enqueue\n 2.Dequeue\n  3.Display\n 4.Exit\n ");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("Enter element to be enqueue");
        scanf("%d",&x);
        enqueue(x); break;
        case 2: dequeue(); break;
        
        case 3: display(); break;
        case 4: exit(0); break;
        default : printf("\nInvalid"); break;
    }
    } while (ch!=4);
}