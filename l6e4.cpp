#include <stdio.h>
int main(){
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
}
