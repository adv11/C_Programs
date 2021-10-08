#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
}*head,*newnode,*tail;
int main(){
	int choice=1,ch,ch2,c;
	head=0;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0){
			tail=head=newnode;
		}
		else{
			tail->next=newnode;
			tail=newnode;
		}
		tail->next=head;
		printf("\nDo you want to continue:\t");
		scanf("%d",&choice);
	}
	printf("\nDo you want to insert any node:\t");
	printf("\nPress 1 to enter a node at beginning.\n");
	printf("Press 2 to enter a node at end.\n");
	printf("Press 3 to enter a node at any specific position.\n");
	scanf("%d",&ch);
	if(ch==1){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
		tail->next=head;
	}
	if(ch==2){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\t");
		scanf("%d",&newnode->data);
		newnode->next=0;
		tail->next=newnode;
		tail=newnode;
		tail->next=head;
	}
	if(ch==3){
		int pos,i=1;
		struct node *temp;
		printf("Enter position:\t");
		scanf("%d",&pos);
		if(pos<1){
			printf("Invalid Position.\n");
		}
		else{
			temp=head;
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("Enter data:\t");
			scanf("%d",&newnode->data);
			newnode->next=0;
			while(i<pos-1){
				temp=temp->next;
				i++;
			}
			newnode->next=temp->next;
			temp->next=newnode;
		}
	}
	printf("\nDo you want to delete any node:\n");
	printf("Press 1 to delete node from beginning:\n");
	printf("Press 2 to delete node from end:\n");
	printf("Press 3 to delete node from any specific node:\n");
	scanf("%d",&ch2);
	if(ch2==1){
		 struct node *temp;
		 temp=head;
		 head=head->next;
		 tail->next=head;
		 free(temp);
	}
	if(ch2==2){
		struct node *current,*previous;
		current=tail->next;
		previous=0;
		if(current->next==current){
			tail=0;
			free(current);
		}
		else{
			while(current->next!=tail->next){
				previous=current;
				current=current->next;
			}
			previous->next=tail->next;
			tail=previous;
			free(current);
		}
	}
	if(ch2==3){
		struct node *current,*nextnode;
		int pos,i=1;
		current=tail->next;
		printf("Enter position:\t");
		scanf("%d",&pos);
		if(pos<1){
			printf("Invalid Position.");
		}
		else{
			while(i<pos-1){
				current=current->next;
				i++;
			}
			nextnode=current->next;
			current->next=nextnode->next;
			free(nextnode);
		}
	}
	printf("\nDo you want to reverse:\t");
	scanf("%d",&c);
	if(c==1){
		struct node *current,*prev,*nextnode;
		current=tail->next;
		nextnode=current->next;
		if(tail==0){
			printf("List is Empty.");
		}
		else{
			while(current!=tail){
				prev=current;
				current=nextnode;
				nextnode=current->next;
				current->next=prev;
			}
			nextnode->next=tail;
			tail=nextnode;
		}
	}
	tail=head;
	printf("\nThe Linked List is as follows:\n");
	while(tail->next!=head){
		printf("%d ",tail->data);
		tail=tail->next;
	}
	printf("%d",tail->data);
}
