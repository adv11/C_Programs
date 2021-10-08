#include <stdio.h> 
#include <math.h>
void printPowerSet(char *set, int set_size) 
{ 
    unsigned int pow_set_size = pow(2, set_size); 
    int counter, j; 
    for(counter = 0; counter < pow_set_size; counter++) 
    { 
    	printf(",  {"); 
		for(j = 0; j < set_size; j++) 
          if(counter & (1<<j)) 
            printf("%c,", set[j]); 
		printf("}"); 
    } 
} 
int main() 
{ 
    char set[100];
    int n,i;
    printf("Enter the size of the set:");
    scanf("%d",&n);
	printf("Enter the elements one by one followed by enter:\n{");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c",&set[i]);
		printf("\b,");
	}
	printf("\b\b}\nThe POWER SET of the given set is:\n");
    printPowerSet(set, n);  
}
