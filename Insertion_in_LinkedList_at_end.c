#include<stdio.h>
#include<malloc.h>
void main(){
	int choice = 1, count = 0, ch;
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *temp, *newnode;
	head = 0;
	while(choice){
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data:-\n");
		scanf("%d",&newnode->data);
		newnode->next = 0;
		if(head == 0){
			head = temp = newnode;
		}
		else{
			temp->next = newnode;
			temp = newnode;
		}
		printf("\nDo you want to continue:-(0/1)\t");
		scanf("%d",&choice);
	}
	printf("\nInstructions:-\n");
	printf("1) Press 1 for adding node at beginning.\n");
	printf("2) Press 2 for adding node at end.\n");
	scanf("%d",&ch);
	if(ch==1){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:-\t");
		scanf("%d",&newnode->data);
		newnode->next = head;
		head = newnode;
	}
	if(ch==2){
		newnode=(struct node*)malloc(sizeof(struct node)); // Insertion at the end of the linked list.
		printf("Enter data:-\t");
		scanf("%d",&newnode->data);
		newnode->next = 0;
		temp=head;
		while(temp->next != 0){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	temp = head;
	printf("\nThe created Linked List is as follows:-\n");
	while(temp != 0){
		printf("%d ",temp->data);
		temp = temp->next;
		count++;
	}
	printf("\n Length of the Linked List is:-\t%d",count);
	getch();
}
