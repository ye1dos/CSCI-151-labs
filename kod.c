#include <stdio.h>

int main(){
	int f[20],i,sum=0;
	f[0]=0;
	f[1]=1;
	for(i=2;i<20; i++){
		f[i]=f[i-1]+f[i-2];
	}
		for(i=0;i<20; i++){
		printf("%i ",f[i]);
		sum=sum+f[i];
	}
	printf("\nSum:%i",sum);

FILE *file;
file = fopen("numbers.txt","r");
int a[10000],j=0,sum1=0;
do{
	fscanf(file, "%i",&a[j]);
	sum1 = sum1 + a[j];
	j++;
}while((!feof(file)));
printf("\nSum:%i",sum1);
}
