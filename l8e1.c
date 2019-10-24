#include <stdio.h>
int main(){
	int a,n;
	printf("Input the number:");
	scanf("%i",&a);
	do {
		printf("%i",a*a);
		printf("\nInput the number:");
		scanf("%i",&a);
	}while(a>0);
	printf("%i\n",a*a);
	printf("Done");	
	return 0;
}
