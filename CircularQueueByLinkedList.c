#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("Enter data:\t");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(front==0 && rear==0){
		front=rear=newnode;
		rear->next=front;
	}
	else{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
}

void dequeue(){
	struct node *temp;
	temp=front;
	if(front==0 && rear==0){
		printf("Queue is already empty.\n");
	}
	else if(front==rear){
		printf("Dequeued element is %d\n",front->data);
		front=rear=0;
		free(temp);
	}
	else{
		front=front->next;
		rear->next=front;
		free(temp);
	}
}

void peek(){
	if(front==0 && rear==0){
		printf("queue is empty.\n");
	}
	else{
		printf("Peek element in queue is %d",front->data);
	}
}

void isEmpty(){
	if(front==0 && rear==0){
		printf("Queue is empty.\n");
	}
	else{
		printf("Queue is not empty.\n");
	}
}

void display(){
	struct node *temp;
	temp=front;
	if(front==0 && rear==0){
		printf("Queue is empty.\n");
	}
	else{
		while(temp->next != front){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}

int main(){
	int ch;
	do{
		printf("Enter Choice:\n");
		printf("Press 1 to enqueue elements in Queue:\n");
		printf("Press 2 to dequeue element from Queue:\n");
		printf("Press 3 to find peek element of the Queue:\n");
		printf("Press 4 to check is the Queue is empty?\n");
		printf("Press 5 to display created Queue:\n");
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
			isEmpty();
			break;
		case 5:
			display();
			break;
		default:
			printf("\nEnter Right Choice.");
	}
}
	while(ch!=0);
	getch();
}

