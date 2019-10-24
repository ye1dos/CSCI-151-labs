#include <stdio.h>
int main(){
	int n,k,i=0,j=1;
	scanf("%i",&n);
	
	while(i<n){
		n = n/2;
		j++;
		i++;
	}
	printf("%i",j);
}
