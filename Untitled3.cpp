#include <stdio.h>
int main(){
	//;6e4
	int i,j,k;
	for(i=0; i<5; i++){
		printf("\n");
		for(j=i; j>0; j--){
			printf("*");
			}	
		for(k=i; k<5; k++){
			printf("+");	
			}
	}
	
	int i,j,k;
	for(i=0; i<5; i++){
		printf("\n");
		for(j=i; j>0; j--){
			printf("%i ",j);
			}}
			
	int i, j, N;
    	for(i=1;i<=5;i++)
    	{
    		for(j=1; j<=5; j++)
    	{
    			if(i==1 || i==5 || j==1 || j==5)
        			{
					printf("*");
					}
				else
				{
				printf("-");
				}
				}
				printf("\n");
    }
			}
