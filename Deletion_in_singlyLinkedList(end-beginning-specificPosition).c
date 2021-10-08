#include<stdio.h>
#include<malloc.h>
void main(){
	int choice=1, ch,count=0;
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *newnode, *temp;
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
	printf("\nDo you want to delete node:-\n");
	printf("1) Enter 1 for deleting from front.\n");
	printf("2) Enter 2 for deleting from end.\n");
	printf("3) Enter 3 for deleting from specific position.\n");
	scanf("%d",&ch);
	if(ch==1){
		temp=head;
		head=head->next;
		free(temp);
	}
	if(ch==2){
		temp=head;
		struct node *prenode;
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
	if(ch==3){
		struct node *nextnode;
		int pos,i=1;
		temp=head;
		printf("Enter the position to delete:-\t");
		scanf("%d",&pos);
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);
	}
	temp=head;
	printf("\nThe created Linked List is as follows:-\n");
	while(temp != 0){
		printf("%d ",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\nThe length of the created Linked List is:-\t%d",count);
	getch();
}
