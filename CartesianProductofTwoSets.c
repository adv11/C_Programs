#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,n,m;
	printf("Enter length of set A:\n");
	scanf("%d",&n);
	printf("Enter the set A:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter length of set B:\n");
	scanf("%d",&m);
	printf("Enter the set B:\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("(%d,%d),",a[i],b[j]);		
		}
	}
}
