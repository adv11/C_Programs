#include<stdio.h>
int main(){
	int n, choice=1;
	while(choice){
		printf("Enter any number:-\t");
		scanf("%d",&n);
		if(n & 1 == 0){
			printf("%d is even.",n);
		}
		else{
			printf("%d is odd.",n);
		}
		printf("\nDo you want to continue(0/1) : \t");
		scanf("%d",&choice);
	}
	return 0;
}
