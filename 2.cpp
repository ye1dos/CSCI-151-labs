#include <stdio.h>
#include <math.h>

int main(){
setvbuf( stdout, NULL, _IONBF, 0 ); 
//Task 1
int a;
printf("Enter a number between 0 and 32767:");
scanf("%d",&a);
printf("In octal, your number is: ");
printf("%.5o",a);
printf("\n");

//Task 2
int C;
double F;
printf("Input Celsius:");
scanf("%i",&C);
F = (double)C * 9/5 + 32;
printf("Fahrenheit: %.2f",F);
return 0;
	
}
