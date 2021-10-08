#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
}*head,*temp;
int print(){
	if(head==0){
		printf("Empty Linked List.");
	}
	else{
		temp=head;
		while(temp->next!=head){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
	printf("%d",temp->data);
}
int main(){
	int choice=1;
	struct node *newnode;
	head=0;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		temp->next=head;
		printf("\nDo you want to continue:\t");
		scanf("%d",&choice);
	}
	print(head);
}
