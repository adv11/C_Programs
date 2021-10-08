#include<stdio.h>
int findz(unsigned short int a[], unsigned short int h, unsigned short int x, unsigned short int n){
	unsigned short int i,z;
	z=(h%x);
	for(i=0;i<n;i++){
		if(z==a[i]){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(){
	unsigned short int t,h,x,n,i,p,a[n];
	scanf("%hu",&t);
	while(t-->0){
		scanf("%hu %hu %hu",&n,&h,&x);
		for(i=0;i<n;i++){
			scanf("%hu",&a[i]);
		}
		p=findz(a,h,x,n);
		if(p==1){
			printf("YES");
		}
		else{
			printf("NO");
		}
	} 
}
