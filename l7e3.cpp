#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
int main () {
	double i=0,j;
	while(i<90){
		j=i;
		while(sin(j*PI/180)<1.0){
			printf("*");
		j++;
		}
		i++;
		printf("%lf \n",i);
	}
	i=90;
	j=0;
	while(i<180){
		j=180-i;
		while(sin(j*PI/180)<1.0){
			printf("*");
		j++;
		}
		i++;
		printf("%lf \n",i);
	}
}
