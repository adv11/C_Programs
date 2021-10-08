#include<stdio.h>
int Partition(int a[],int lb,int ub){
	int pivot,start,end;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start < end){
		while(a[start] <= pivot){
			start++;
		}
		while(a[end] > pivot){
			end--;
		}
		if(start < end){
			a[start]=a[start]^a[end];
			a[end]=a[start]^a[end];
			a[start]=a[start]^a[end];
		}
	}
	a[lb]=a[lb]^a[end];
	a[end]=a[lb]^a[end];
	a[lb]=a[lb]^a[end];
	return end;
}
int QuickSort(int a[],int lb,int ub){
	int loc;
	if(lb < ub){
		loc=Partition(a, lb, ub);
		QuickSort(a, lb, loc-1);
		QuickSort(a, loc+1, ub);
	}
}
int main(){
	int n,a[n],i;
	printf("Enter size of array:\t");
	scanf("%d",&n);
	printf("\nEnter elements:-\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	QuickSort(a, 0, n-1);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
