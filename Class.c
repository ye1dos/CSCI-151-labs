#include <stdio.h>
int main(){
	printf("Lesson 6 Exercise 4\n");
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
	printf("\n");
	printf("Exercise 2\n");
	printf("\n");
	//int i, j;
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
    printf("\n");
    printf("Exercise 3\n");
    	//int i,j,k;
	for(i=1; i<6; i++){
		printf("\n");
		for(j=i; j>0; j--){
			printf("%i ",j);
			}}
			}
