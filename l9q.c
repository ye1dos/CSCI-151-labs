#include <stdio.h>
int main(){
int a=157,b,c,i=0;;
do{
	b = a % 8;
	a = a / 8;
	printf("+(%i * 8^%i) ",b,i);
	i++;
}while(a>0);


}
