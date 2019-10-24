#include <stdio.h>
long long int f(int a){
if (a==0|| a==1){
	return 1;
}
else {
	return f(a-1)*a;
}
}

int main(){
	long int a,n,n1,a1,ans,ans1,qwerty;
	scanf("%ld",&n1);
	scanf("%ld",&a1);
		ans = f(a1);
		ans1 = f(n1);
	long int answer = ans1/ans;
		qwerty = f(n1-a1);
//	for(a=0,n=0; a<a1,n<n1; a++,n++){
//	}
	long int total = answer/qwerty;
	printf("%ld %ld %ld %ld %ld\n",ans1,ans,answer, qwerty,total);
}
