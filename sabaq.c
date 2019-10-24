#include <stdio.h>
 f(int a){
if (a==0|| a==1){
	return 1;
}
else {
	return f(a-1)*a;
}
}

int main(){
	int a,n,n1,a1,ans,ans1,qwerty;
	scanf("%i",&n1);
	scanf("%i",&a1);
		ans = f(a1);
		ans1 = f(n1);
	int answer = ans1/ans;
		qwerty = f(n1-a1);
//	for(a=0,n=0; a<a1,n<n1; a++,n++){
//	}
	int total = answer/qwerty;
	printf("%i %i %i %i %i\n",ans1,ans,answer, qwerty,total);
}
