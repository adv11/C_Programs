#include<stdio.h>
#include<stdlib.h>
#define n 5
int deque[n];
int front=-1, rear=-1;
// Enqueue from front
void enqueueFront(){
	int x;
	printf("Enter data:\t");
	scanf("%d",&x);
	if((front == rear+1) || (front == 0 && rear == n-1)){
		printf("Queue is full.\n");
	}
	else if(front == -1 && rear == -1){
		front=rear=0;
		deque[front]=x;
	}
	else if(front == 0){
		front=(n-1);
		deque[front]=x;
	}
	else{
		front--;
		deque[front]=x;
	}
	printf("\n");
}
// Enqueue from rear
void enqueueRear(){
	int x;
	printf("Enter data:\t");
	scanf("%d",&x);
	if((front == rear+1) || (front == 0 && rear == n-1)){
		printf("Queue is full.\n");
	}
	else if(front == -1 && rear == -1){
		front=rear=0;
		deque[rear]=x;
	}
	else if(rear == n-1){
		rear=0;
		deque[rear]=x;
	}
	else{
		rear++;
		deque[rear]=x;
	}
	printf("\n");
}
// Display function
void display(){
	int i;
	while(i != rear){
		printf("%d ",deque[i]);
		i=(i+1)%n;
	}
	printf("%d",deque[rear]);
	printf("\n");
}
// Peek element function
void peek(){
	if(front == -1 && rear == -1){
		printf("Queue is empty.\n");
	}
	else{
		printf("Peek element in Queue is - %d",deque[front]);
	}
	printf("\n");
}
// rear element function
void rearElement(){
	if(front == -1 && rear == -1){
		printf("Queue is empty.\n");
	}
	else{
		printf("Rear element in Queue is - %d",deque[rear]);
	}
	printf("\n");
}
// Dequeue from front
void dequeueFront(){
	if(front == -1 && rear == -1){
		printf("Queue is empty.\n");
	}
	else if(front == rear){
		printf("Dequeued element is - %d",deque[front]);
		front = rear = -1;
	}
	else if(front == n-1){
		printf("Dequeued element is - %d",deque[front]);
		front=0;
	}
	else{
		printf("Dequeued element is - %d",deque[front]);
		front++;
	}
	printf("\n");
}
// dequeue from rear
void dequeueRear(){
	if(front == -1 && rear == -1){
		printf("Queue is empty.\n");
	}
	else if(front == rear){
		printf("Dequeued element is - %d",deque[rear]);
		front = rear = -1;
	}
	else if(rear == 0){
		printf("Dequeued element is - %d",deque[rear]);
		rear=n-1;
	}
	else{
		printf("Dequeued element is - %d",deque[rear]);
		rear--;
	}
	printf("\n");
}
// main funtion
int main(){
	int ch;
	do{
		printf("Enter choice:\n");
		printf("1-Enqueue from front.\n");
		printf("2-Enqueue from rear.\n");
		printf("3-Display Queue.\n");
		printf("4-Find front element.\n");
		printf("5-Find rear element.\n");
		printf("6-Dequeue from front.\n");
		printf("7-Dequeue from rear.\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				enqueueFront();
				break;
			case 2:
				enqueueRear();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				rearElement();
				break;
			case 6:
				dequeueFront();
				break;
			case 7:
				dequeueRear();
				break;
			default:
				printf("Wrong Choice!\n");
		}
	}
	while(ch!=0);
	getch();
}
