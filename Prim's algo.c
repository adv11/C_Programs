#include<stdio.h>
#include<stdbool.h>
#define INF 9999999
int main(){
	int v, i, j, a[v][v], no_edge=0, selected[0], min, row=0, col=0;
	printf("Enter number of vertices:-\t");
	scanf("%d",&v);
	printf("\nEnter adjacency matrix:-\n");
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			scanf("%d",&a[i][j]);
		}
	}
	selected[0]=true;
	printf("Edge : Weight\n");
	while(no_edge < v-1){
		min=INF;
		for(row=0;row<v;row++){
			if(selected[i]){
				for(col=0;col<v;col++){
					if(!selected[j] && a[i][j]){
						if(min > a[i][j]){
							min=a[i][j];
							row=i;
							col=j;
						}
					}
				}
			}
		}
		printf("%d - %d : %d\n",row,col,a[row][col]);
		selected[col]=true;
		no_edge++;
	}
	return 0;
}
