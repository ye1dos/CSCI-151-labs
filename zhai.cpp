#include <stdio.h>
int main(){
int n,i;
double x,sum=0,fac=1,pow=1;
scanf("%i",&n);
scanf("%lf",&x);
for(i=1;i<=n; i++){
	pow = pow * x;
	fac = fac * i;
	sum = sum + pow/fac;
}
printf("%lf",1 + sum);
}
