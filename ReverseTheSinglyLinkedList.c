#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
}*head,*temp;
int main(){
	struct node *newnode,*prenode,*nextnode,*currentnode;
	int choice=1,ch;
	head=0;
	while(choice){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:-\t");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0){
		temp=head=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
	printf("\nDo you want to continue:-\t");
	scanf("%d",&choice);
}
printf("\nDo you want to reverse LL:\t");
scanf("%d",&ch);
if(ch==1){
	prenode=0;
	currentnode=nextnode=head;
	while(nextnode != 0){
		nextnode=nextnode->next;
		currentnode->next=prenode;
		prenode=currentnode;
		currentnode=nextnode;
	}
	head=prenode;
}
temp=head;
while(temp!=0){
	printf("%d ",temp->data);
	temp=temp->next;
}
}
