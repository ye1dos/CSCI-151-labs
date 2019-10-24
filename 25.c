#include <stdio.h>
int main(){
	printf("First Task\n");
	int sum=0,i,j;
	for(i=2; i<=100; i=i+2){
		sum = sum + i;	
	}
	printf("The sum is equal to: %i",sum);
	printf("\n");
	
	
	printf("Second Task\n");
	int n;
	double x,sum1=1,sum2=0;
	printf("Input the value of n:");
	scanf("%i",&n);
	printf("Input the value of x:");
	scanf("%lf",&x);
	
	for(i=0; i<n; i++){
		sum1 = sum1 * x;
		sum2 = sum2 + sum1;
	}
	printf("The value of series is: %.2lf" ,sum2);
	}
