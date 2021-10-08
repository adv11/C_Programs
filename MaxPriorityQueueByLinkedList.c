#include<stdio.h>
#include<malloc.h>
struct node{
	int priority;
	int data;
	struct node *next;
}*front=0;
// Function declaration
void insert(int, int);
int dequeue();
void display();
int isEmpty();
// main fucntion
int main(){
	int choice,item,item_priority;
	while(1){
		printf("1-Insert\n");
		printf("2-Delete\n");
		printf("3-Display\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter data\t");
				scanf("%d",&item);
				printf("Enter its priority\t");
				scanf("%d",&item_priority);
				insert(item, item_priority);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("Wrong Choice.\n");
		}
	}
}
// insert function
void insert(int item, int item_priority){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==0){
		printf("Memory not allocated.\n");
		return;
	}
	newnode->data=item;
	newnode->priority=item_priority;
	if(isEmpty() || item_priority<front->priority){
		newnode->next=front;
		front=newnode;
	}
	else{
		struct node *temp;
		temp=front;
		while((temp->next != 0) && (temp->next->priority <= item_priority)){
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
// dequeue function
int dequeue(){
	struct node *temp;
	int p;
	if(isEmpty()){
		printf("Queue is empty.\n");
	}
	else{
		temp=front;
		p=front->data;
		front=front->next;
		free(temp);
	}
	printf("Dequeued element is %d",p);
	printf("\n");
}
// isEmpty function
int isEmpty(){
	if(front==0){
		return 1;
	}
	else
	return 0;
}
// display function
void display(){
	struct node *temp;
	temp=front;
	if(isEmpty()){
		printf("Queue is empty.\n");
	}
	else{
		printf("Priority---------------Data\n");
		while(temp != 0){
			printf("%d----------------------%d\n",temp->priority,temp->data);
			temp=temp->next;
		}
	}
}
