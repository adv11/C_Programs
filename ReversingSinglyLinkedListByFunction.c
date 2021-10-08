#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
}*head,*temp;
int ReverseLL(){
	struct node *prenode,*currentnode,*nextnode;
	prenode=0;
	currentnode=nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->next;
		currentnode->next=prenode;
		prenode=currentnode;
		currentnode=nextnode;
	}
	head=prenode;
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
		printf("\nDo you want to continue:\t");
		scanf("%d",&choice);
	}
	printf("\nBefore reversing LL:\n");
	temp=head;
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	ReverseLL(head);
	printf("\nafter reversing LL:\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
