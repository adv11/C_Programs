#include<stdio.h>
#include<malloc.h>
void main(){
	int choice=1, count=0;
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *newnode, *temp;
	head = 0;
	while(choice){
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data:-\t");
		scanf("%d",&newnode->data);
		newnode->next = 0;
		if(head == 0){
			head = temp = newnode;
		}
		else{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Do you want to continue:-(0/1)\t");
		scanf("%d",&choice);
	}
	temp =  head;
	printf("\nThe created linked list is:-\n");
	while(temp != 0){
		printf("%d ",temp->data);
		temp = temp->next;
		count++;
	}
	printf("\nThe length of Linked List is :-\t%d",count);
	getch();
}
