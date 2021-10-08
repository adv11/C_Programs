#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,f,n,m;
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
	printf("Union of set A and set B:\n ");		
	for(i=0;i<m;i++)
		printf(" %d, ",b[i]);
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			f=1;		
		}
		if(f==0)
		printf(" %d, ",a[i]);
	}
}
