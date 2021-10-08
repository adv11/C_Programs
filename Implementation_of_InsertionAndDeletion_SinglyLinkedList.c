#include<stdio.h>
#include<malloc.h>
void main(){
	int choice=1, ch, i=1, pos, del, posdel, count=0;
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *temp, *newnode, *prenode, *nextnode;
	head=0;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:-\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("\nDo you want to continue(0/1):-\t");
		scanf("%d",&choice);
	}
	printf("\nDo you want to insert a node-");
	printf("\nPress 1 for inserting at the beginning:");
	printf("\nPress 2 for adding at the end:");
	printf("\nPress 3 for adding at any specific position:\n");
	scanf("%d",&ch);
	if(ch==1){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data:-\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->next=head;
		head=newnode;
	}
	if(ch==2){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data:-\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=head;
		while(temp->next!=0){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	if(ch==3){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the position where you want to insert:-\t");
		scanf("%d",&pos);
		temp=head;
		while(i<pos){
			temp=temp->next;
			i++;
		}
		printf("\nEnter data:-\t");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
	}
	printf("\nDo you want to delete any node-\n");
	printf("\nPress 1 to delete a node from begin:");
	printf("\nPress 2 to delete a node from end:");
	printf("\nPress 3 to delete a node from any specific position:\n");
	scanf("%d",&del);
	if(del==1){
		temp=head;
		head=temp->next;
		free(temp);
	}
	if(del==2){
		temp=head;
		while(temp->next != 0){
			prenode=temp;
			temp=temp->next;
		}
		if(temp==head){
			head=0;
		}
		else{
			prenode->next=0;
		}
		free(temp);
	}
	if(del==3){
		printf("\nEnter the position which you want to delete:-\t");
		scanf("%d",&posdel);
		temp=head;
		while(i<posdel-1){
			temp=temp->next;
			i++;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);
	}
	temp=head;
	while(temp != 0){
		printf("%d ",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\nThe length of created Linked List is:-\t%d",count);
	getch();
}
