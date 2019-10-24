#include <stdio.h>
#include <math.h>

int main(){
setvbuf( stdout, NULL, _IONBF, 0 ); 
int a,b,c,d;
double x1,x2;
printf("Enter the coefficients:");
scanf("%d",&a);	
scanf("%d",&b);	
scanf("%d",&c);
d = b*b-4*a*c;
x1 = (-b+sqrt(d))/(2*a);
x2 = (-b-sqrt(d))/(2*a);
printf("The roots of the equation %i^2X+%iX+%i=0 are  %f, %f",a,b,c,x1,x2);
return 0;
	
}
