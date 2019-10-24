#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//_Bool areEqual(char str1[20], char str2[20]){
//	int i=0;
//	while(str1[i]==str2[i]){
//		 if (str1[i]=='\0' || str2[i]=='\0'){
//         break;
//		 }
//		i++;
//	}
//	if(str1[i]==str2[i]){
//		return true;
//	}
//	else {
//		return false;
//	}
//}
void reverse(char fromStr[], char toStr[]){
	int i=0,j=0;
	while(fromStr[i]!='\0'){
		i++;
	}
	int n=i;
	while(fromStr[j]!='\0'){
		fromStr[j]=toStr[n-j];
		j++;
		printf("%s revesred as\n",fromStr,toStr);
	}
		
	
}

int main(){
	char str1[20],str2[20],fromStr[20],toStr[20];
//	scanf("%s",str1);
//	scanf("%s",str2);
//	bool i = areEqual(str1,str2);
//	printf("%d\n",i);
	scanf("%s",fromStr);
	reverse(fromStr,toStr);
	//printf("%s revesred as\n",fromStr,toStr);
}
