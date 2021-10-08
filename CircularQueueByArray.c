#include<stdio.h>
#define n 10
int front=-1;
int rear=-1;
int queue[n];

void enqueue(){
	int x;
	printf("Enter data:\t");
	scanf("%d",&x);
	if(front==-1 && rear==-1){
		front++;
		rear++;
		queue[rear]=x;
	}
	else if((rear+1)%n==front){
		printf("Queue is full.\n");
	}
	else{
		rear=(rear+1)%n;
		queue[rear]=x;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		printf("Queue is already empty.\n");
	}
	else if(front==rear){
		printf("Dequeued Element is %d\n",queue[front]);
		front=rear=0;
	}
	else{
		printf("Dequeued Element is %d\n",queue[front]);
		front=(front+1)%n;
	}
}

void peek(){
	if(front==-1 && rear==-1){
		printf("Queue is empty.\n");
	}
	else{
		printf("Peek element in the queue is %d\n",queue[front]);
	}
}

void isFull(){
	if((rear+1)%n==front){
		printf("Queue is full.\n");
	}
	else{
		printf("Queue is not full.\n");
	}
}

void display(){
	int i;
	if(front==-1 && rear==-1){
		printf("Queue is empty.\n");
	}
	else{
		i=front;
		while(i != rear){
			printf("%d ",queue[i]);
			i=(i+1)%n;
		}
		printf("%d",queue[rear]);
	}
	printf("\n");
}

void isEmpty(){
	if(front==-1 && rear==0){
		printf("Queue is empty.\n");
	}
	else{
		printf("Queue is not empty.\n");
	}
}
int main(){
	int ch;
	do{
		printf("Enter Choice:\n");
		printf("Press 1 to enqueue elements in Queue:\n");
		printf("Press 2 to dequeue element from Queue:\n");
		printf("Press 3 to find peek element of the Queue:\n");
		printf("Press 4 to check is the Queue is full?\n");
		printf("Press 5 to check is the Queue is empty?\n");
		printf("Press 6 to display created Queue:\n");
		scanf("%d",&ch);
	switch(ch){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			peek();
			break;
		case 4:
			isFull();
			break;
		case 5:
			isEmpty();
			break;
		case 6:
			display();
			break;
		default:
			printf("\nEnter Right Choice.");
	}
}
	while(ch!=0);
	getch();
}
