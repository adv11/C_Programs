#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
}*head,*tail;
//Display function
void display(){
	struct node *temp;
	temp=head;
	if(head==0){
		printf("List is empty.");
	}
	else{
		while(temp!=tail){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}
//Function for inserting a node at beginning
void insertAtBeg(){
	struct node *newnode;
	head=0;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\t");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0){
		head=tail=newnode;
		newnode->prev=tail;
		newnode->next=tail;
	}
	else{
		newnode->next=head;
		head->prev=newnode;
		newnode->prev=tail;
		tail->next=newnode;
		head=newnode;
	}
}
//Function to insert a node at end
void insertAtEnd(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\t");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0){
		head=tail=newnode;
		newnode->prev=tail;
		newnode->next=head;
	}
	else{
		newnode->prev=tail;
		tail->next=newnode;
		newnode->next=head;
		head->prev=newnode;
		tail=newnode;
	}
}
//Function to insert a node at specific position.
void insertAtPos(){
	struct node *newnode,*temp;
	temp=head;
	int pos,i=1;
	printf("Enter Position:\t");
	scanf("%d",&pos);
	if(pos<1){
		printf("Invalid Position.");
	}
	else if(pos==1){
		insertAtBeg();
	}
	else{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
	}
}
int main(){
	int choice=1,ch;
	struct node *newnode;
	head=0;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		if(head==0){
			head=tail=newnode;
			newnode->prev=head;
			newnode->next=head;
		}
		else{
			tail->next=newnode;
			newnode->prev=tail;
			newnode->next=head;
			head->prev=newnode;
			tail=newnode;			
		}
		printf("\nDo you want to continue:\t");
		scanf("%d",&choice);
	}
	do{
		printf("Enter Choice:\nPress 1 for inserting a node at beginning.\nPress 2 for inserting a node at end.\nPress 3 to insert a node at any specific position.");
		printf("\nPress 4 to display Linked List.\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insertAtBeg();
				break;
			case 2:
				insertAtEnd();
				break;
			case 3:
				insertAtPos();
				break;
			case 4:
				display();
				break;
			default:
				printf("Invalid Position.");
		}
	}
	while(ch != 0);
	getch();
}
