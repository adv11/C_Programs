#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value of A and B respectively:\n"); 
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("A&B =%d\n",c);
	c=a||b;
	printf("A||B=%d\n",c);
	if(a==0)
	c=1;
	else
	c=0;
	if(b==0)
	d=1;
	else
	d=0;
	printf(" A' =%d\n B' =%d",c,d);
}
