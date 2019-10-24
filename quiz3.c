#include <stdio.h>
int strtoint(char num[]){
	int san = 0, result = 0 , i;
	for(i=0; num[i]>='0' && num[i]<='9'; i++){
		san = num[i]-'0';
		result = result*10 + san;
	}
	return result;
}
int main(){
//	printf("%i",strtoint("34"));

 int a = 11, b = 20;
 int x, y;
 
 int *ip1 = &a;
 int *ip2 = &x;
 
 int **ipp = &ip2;
 *ip2 = *ip1 * 7 + b;
 
 ip1 = ip2;
 ip2 = &y;
 
 **ipp = 88;
 *ipp = &b;
 printf("%i %i %i %i %i %i %i %i %i %i %i",a,b,x,y,ip1,ip2,ipp,*ip1,*ip2 ,*ipp ,**ipp );

}
