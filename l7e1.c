#include <stdio.h>
int main(){
	int a=0,b=1,c,x=0;
	while(x<20){
		c=a+b;
		a=b;
		b=c;
		printf("%i\n",c);
		x++;
	}
	}
