#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *left; // for left child
	struct node *right; // for right child
};
// function declaration
struct node *create();
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);
// function definition
// create function
struct node *create(){
	struct node *newnode;
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:(press -1 for no node)\t");
	scanf("%d",&x);
	if(x==-1){ // if there is no node
		return 0;
	}
	newnode->data=x;
	newnode->left=0;
	newnode->right=0;
	printf("Enter left child of %d\n",x); // for left child
	newnode->left=create();
	printf("Enter right child of %d\n",x); // for right child
	newnode->right=create();
	return newnode; // returning address of root node
}
//preorder function
void preorder(struct node *root){
	if(root==0){
		return;
	}
	printf("%d ",root->data); 	// root
	preorder(root->left);	// left child
	preorder(root->right);	// right child
	printf("\n");
}
// inorder function
void inorder(struct node *root){
	if(root==0){
		return;
	}
	inorder(root->left);	// left child
	printf("%d ",root->data);	// root
	inorder(root->right);	// right child
	printf("\n");
}
//postorder function
void postorder(struct node *root){
	if(root==0){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
	printf("\n");
}
//main function
void main(){
	int ch;
	struct node *root;
	do{
		printf("Enter choice:\n");
		printf("1- Create Binary Tree:\n");
		printf("2- Preorder Traversal:\n");
		printf("3- Inorder Traversal:\n");
		printf("4- Postorder Traversal:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				root=0;
				root=create();
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			default:
				printf("Wrong Choice\n");
		}
	}
	while(ch != 0);
	getch();
}
