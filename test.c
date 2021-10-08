#include<stdio.h>
#include<math.h>
int main(){
	int t,h,m,bim;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&m,&h);
		bim=m/(h*h);
		if(bim<=18){
			printf("1");
		}
		if(bim==19 || bim==20 || bim==21 || bim==22 || bim==23 || bim==24){
			printf("2");
		}
		if(bim==25 || bim==26 || bim==27 || bim==28 || bim==28 || bim==29){
			printf("3");
		}
		if(bim>=30){
			printf("4");
		}
	}
}
