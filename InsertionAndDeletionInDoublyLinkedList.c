#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
}*head,*tail,*newnode;
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
	printf("\nDo you want to insert any node:\t");
	printf("\nPress 1 to insert at beginning:\n");
	printf("Press 2 to insert at end:\n");
	printf("Press 3 to insert at any specific position:\n");
	scanf("%d",&ch1);
	if(ch1==1){
		struct node *temp;
		temp=head;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		newnode->next=temp;
		temp->prev=newnode;
		head=newnode;
	}
	if(ch1==2){
		struct node *temp;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
	if(ch1==3){
		int pos,i=1;
		printf("Enter position:\t");
		scanf("%d",&pos);
		if(pos<1){
			printf("Invalid Position.");
		}
		else{
			struct node *temp;
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
			temp->next->prev=newnode;
			newnode->next=temp->next;
			newnode->prev=temp;
			temp->next=newnode;
		}
	}
	printf("\nDo you want to delete any node:\t");
	printf("\nPress 1 to delete from beginning:\n");
	printf("Press 2 to delete from end:\n");
	printf("Press 3 to delete from any specific position:\n");
	scanf("%d",&ch2);
	if(ch2==1){
		struct node *temp;
		head=head->next;
		free(temp);
	}
	if(ch2==2){
		struct node *temp;
		temp=tail;
		tail->prev->next=0;
		tail=tail->prev;
		free(temp);
	}
	if(ch2==3){
		int pos,i=1;
		struct node *temp;
		temp=head;
		printf("Enter position:\t");
		scanf("%d",&pos);
		while(i<pos){
			temp=temp->next;
			i++;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
	tail=head;
	while(tail!=0){
		printf("%d ",tail->data);
		tail=tail->next;
	}
}
