#include<stdio.h>
#define N 10
int stack[N],top=-1;
//Fucntion to push elements in a stack.
void push(){
	int x;
	printf("Enter data:\t");
	scanf("%d",&x);
	if(top==N-1){
		printf("Stack is full.");
	}
	else{
		top++;
		stack[top]=x;
	}
}
//Fucntion to pop elements in a stack.
void pop(){
	int item;
	if(top==-1){
		printf("Stack is empty.");
	}
	else{
		item=stack[top];
		top--;
		printf("%d ",item);
	}
}
//Fucntion to print peek element of the stack.
void peek(){
	if(top==-1){
		printf("Stack is empty.");
	}
	else{
		printf("Peek element is %d",stack[top]);
	}
}
//Function to display elements in a stack.
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d ",stack[i]);
	}
	printf("\n");
}
int main(){
	int ch;
	do{
		printf("Enter choice:\n");
		printf("Press 1 for Push Operation:\n");
		printf("Press 2 for Pop Operation:\n");
		printf("Press 3 for Peek Operation:\n");
		printf("Press 4 for displaying elements in a stack:\n");
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
				printf("Invalid Choice.");
		}
	}
	while(ch!=0);
	getch();
}
