#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
}*top=0;
//Function to push elements in stack.
void push(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\t");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}
//Funtion to pop element.
void pop(){
	struct node *temp;
	temp=top;
	if(top==0){
		printf("Stack is empty.");
	}
	else{
		printf("The popped element is %d",top->data);
		top=top->next;
		free(temp);
	}
	printf("\n");
}
//Function to find peek element.
void peek(){
	if(top==0){
		printf("Stack is empty.");
	}
	else{
		printf("Top element is %d",top->data);
	}
	printf("\n");
}
//Function to display elements in a stack.
void display(){
	struct node *temp;
	temp=top;
	if(top==0){
		printf("Stack is empty.");
	}
	else{
		while(temp!=0){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}
int main(){
	int ch;
	do{
		printf("Enter Choice:\n");
		printf("Press 1 to Push element in a stack:\n");
		printf("Press 2 to pop element in a stack:\n");
		printf("Press 3 to find peek element of the stack:\n");
		printf("Press 4 to display created stack:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("Invalid Choice, Please select right choice.");
		}
	}
	while(ch!=0);
	getch();
}
