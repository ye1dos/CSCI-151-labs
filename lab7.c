#include <stdio.h>

int DecimaltoBinary(int n){
    if(n==0){
    	return 0;
	}
	else{
		return (n%2+10*DecimaltoBinary(n/2));
	}
	}
    
int exponential(int a,int n){
	if(n==0){
		return 1;
	}
	else{
		return exponential(a,n-1)*a;
	}
}


int main()
{
    int x,a,n;
    printf("Task 1\n\n");
    printf("Decimal Number: ");
    scanf("%i",&x);
    printf("Binary Number: ");
    int z = DecimaltoBinary(x);
    printf("%i",z);
    printf("\n\n");
    printf("Task 2\n\n");
    printf("Number: ");
    scanf("%i",&a);
    printf("Degree: ");
    scanf("%i",&n);
	printf("%i^%i = %i\n",a,n,exponential(a,n));
    return 0;
}
