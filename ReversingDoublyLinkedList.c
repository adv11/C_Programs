#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
}*head,*tail,*newnode,*temp1,*temp2;
int main(){
	int choice=1,ch1,ch2;
	head=0;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		if(head==0){
			head=tail=newnode;
		}
		else{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
		printf("\nDo you want to continue:\t");
		scanf("%d",&choice);
	}
	printf("\nBefore Reversing:\n");
	temp1=head;
	while(temp1!=0){
		printf("%d ",temp1->data);
		temp1=temp1->next;
	}
	printf("\nAfter Reversing:\n");
	temp2=tail;
	while(temp2!=0){
		printf("%d ",temp2->data);
		temp2=temp2->prev;
	}
}
