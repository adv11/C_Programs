//Program to implement queue by Array.
#include<stdio.h>
#define n 10
int front=-1;
int rear=-1;
int queue[n];
//Enqueue Function.
void enqueue(){
	int x;
	printf("Enter data:\t");
	scanf("%d",&x);
	if(rear==n-1){
		printf("Queue is full.\n");
	}
	else if(front==-1 && rear==-1){
		front++;
		rear++;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
	printf("\n");
}
//Dequeue Function
void dequeue(){
	if(rear==-1 && front==-1){
		printf("Queue is already empty.\n");
	}
	else if(front==rear){
		printf("Dequeued element is - %d\n",queue[front]);
		front--;
		rear--;
	}
	else{
		printf("Dequeued element is - %d\n",queue[front]);
		front++;
	}
	printf("\n");
}
//Function to return peek element in queue.
void peek(){
	if(front==-1 && rear==-1){
		printf("Queue is empty.\n");
	}
	else{
		printf("Peek element in queue is - %d\n",queue[front]);
	}
	printf("\n");
}
//isFull Function.
void isFull(){
	if(front==-1 && rear==-1){
		printf("Queue is empty.\n");
	}
	else if(rear==n-1){
		printf("Queue is full.\n");
	}
	else{
		printf("Queue has still some space.\n");
	}
	printf("\n");
}
//isEmpty Function.
void isEmpty(){
	if(rear<n-1){
		printf("Queue is empty.\n");
	}
	printf("\n");
}
void display(){
	int i;
	if(front==-1 && rear==-1){
		printf("Queue is Empty.\n");
	}
	else{
		for(i=front ; i<(rear+1) ; i++){
			printf("%d ",queue[i]);
		}
	}
	printf("\n");
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
