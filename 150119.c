#include <stdio.h>
#define siz 12

int main(){
//	int f[15],i;
//	f[0]=0;
//	f[1]=1;
//	for(i=2;i<=14; i++){
//		f[i]=f[i-1]+f[i-2];
//		printf("%i ",f[i]);
//	}

int a[size] = {1,2,3,4,5,6,7,8,9,10,11,12};
int i,total =0; 
for(i=0; i<=size; i++){
	total+=a[i];
}
printf("sum: %c",total);
return 0;
}
					/////	///												///koro4e bari sotkada bar surettery- primerno labkadagy esepter keledy eken
