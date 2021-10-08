#include<stdio.h>
int main(){
	int n,choice=1,ch;
	while(choice){
		printf("Enter any number : \t");
		scanf("%d",&n);
		printf("\nPress 1 to divide the number by 2.\nPress 2 to multiple the number by 2.\nPress 3 to exit");
		scanf("%d",&ch);
		if(ch==1){
			printf("After division by 2 the number is : %d",(n>>1));
		}
		if(ch==2){
			printf("After multiplication by 2 the number is : %d",(n<<1));
		}
		if(ch==3){
			
		}
		printf("\nDo you want to continue(0/1) : \t");
		scanf("%d",&choice);
	}
	return 0;
}
