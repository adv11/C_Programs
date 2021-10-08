#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *prev,*next;
}*newnode,*temp,*head;
int main(){
	head=0;
	int choice=1,c;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		printf("\nDo you want to continue:-\t");
		scanf("%d",&choice);
	}
	temp=head;
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
