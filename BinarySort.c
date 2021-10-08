#include<stdio.h>
int main(){
	int n,a[n],i,j,flag;
	printf("Enter the number of elements in an array:-\t");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<(n-i-1);j++){
			if(a[j]>a[j+1]){
				a[j]=a[j]^a[j+1];
				a[j+1]=a[j]^a[j+1];
				a[j]=a[j]^a[j+1];
				flag=1;
			}
		}
		if(flag==0){
			break;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
