//Queue Implemention by Stack.
#include<stdio.h>
#define n 5
//Function Declaration.
void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
int top1=-1, top2=-1;
int s1[n], s2[n], count=0;
//Function Definition.
//Push function to push elements in stack 1 
void push1(int x){
	if(top1 == n-1){
		printf("Stack is full.\n");
	}
	else{
		top1++;
		s1[top1]=x;
	}
}
//Enqueue function to push elements in stack 1
void enqueue(){
	int x;
	printf("Enter data:\t");
	scanf("%d",&x);
	push1(x);
	count++; // Counting because we need count of enqueue elements while dequeuing. We have to use for loop.
}
//Pop function to pop out elements from stack 1
int pop1(){
	return s1[top1];
	top1--;
}
//Pop function to pop out elements from stack 2
int pop2(){
	return s2[top2];
	top2--;
}
//Push function for stack 2
void push2(int x){
	if(top2 == n-1){
		printf("Stack is full.\n");
	}
	else{
		top2++;
		s2[top2]=x;
	}
}
//Dequeue function.
void dequeue(){
	int i,a,b;
	if(top1 == -1 && top2 == -1){
		printf("Stack is full.\n");
	}
	else{
		for(i=0 ; i<count ; i++){
			a=pop1(); //Poping out elements from stack 1
			push2(a); //Pushing that element in stack 2
		}
		b=pop2();
		printf("Dequeued element is - %d",b);
		count--;
		for(i=0 ; i<count ; i++){
			a=pop2(); //Poping out elements from stack 2
			push1(a); // Pushing that element in stack 1 for decreasing Space Complexity
		}
	}
}
//Display function
void display(){
	int i;
	for(i=0 ; i<=top1 ; i++){
		printf("%d ",s1[i]);
	}
}
//main function
int main(){
	int ch;
	do{
		printf("Enter choice:\n");
		printf("Press 1 for Enqueue operation:\n");
		printf("Press 2 for dequeue operation:\n");
		printf("Press 3 for display:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("Enter right choice.\n");
				break;
		}
	}
	while(ch != 0);
	getch();
}
