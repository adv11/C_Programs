#include<stdio.h>
int main(){
	int n,a[n],i,j,min;
	printf("Enter the number of elements in an array:-\t");
	scanf("%d",&n);
	printf("\nEnter the elements:-\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		min=i;
		for(j=(i+1);j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min != i){
			a[i]=a[i]^a[min];
			a[min]=a[i]^a[min];
			a[i]=a[i]^a[min];
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
