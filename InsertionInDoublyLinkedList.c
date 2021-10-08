#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next,*prev;
}*head,*tail,*temp;
int main(){
	head=0;
	struct node *newnode;
	int choice=1,c;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		if(head==0){
			head=tail=newnode;
		}
		else{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
		printf("\nDo you want to continue:-\t");
		scanf("%d",&choice);
	}
	printf("\nDo you want to insert a node:\t");
	printf("\nPress 1 to insert at beginning:\t");
	printf("\nPress 2 to insert at end:\t");
	printf("\nPress 3 to insert at any position:\t");
	printf("\nPress 4 to insert after any position:\t\n");
	scanf("%d",&c);
	if(c==1){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
	if(c==2){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
	if(c==3){
		int i=1,pos;
		printf("Enter position where you want to add a node:\t");
		scanf("%d",&pos);
		if(pos<1){
			printf("\nInvalid position.");
		}
		else{
			temp=head;
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("Enter data:\t");
			scanf("%d",&newnode->data);
			newnode->next=0;
			newnode->prev=0;
			while(i<pos-1){
				temp=temp->next;
				i++;
			}
			newnode->prev=temp;
			newnode->next=temp->next;
			temp->next=newnode;
			newnode->next->prev=newnode;
		}
	}
	if(c==4){
		int i=1,pos;
		printf("Enter position after you want to add a node:\t");
		scanf("%d",&pos);
		if(pos<1){
			printf("\nInvalid position.");
		}
		else{
			temp=head;
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("Enter data:\t");
			scanf("%d",&newnode->data);
			newnode->next=0;
			newnode->prev=0;
			while(i<pos){
				temp=temp->next;
				i++;
			}
			newnode->prev=temp;
			newnode->next=temp->next;
			temp->next=newnode;
			newnode->next->prev=newnode;
		}
	}
	temp=head;
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
