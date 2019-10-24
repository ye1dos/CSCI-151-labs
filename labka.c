#include <stdio.h>
#include <string.h>
#include <stdbool.h>
_Bool areEqual(char str1[20], char str2[20]){
	int i=0;
	while(str1[i]==str2[i]){
		 if (str1[i]=='\0' || str2[i]=='\0'){
         break;
		 }
		i++;
	}
	if(str1[i]==str2[i]){
		return true;
	}
	else {
		return false;
	}
}
void reverse(char fromStr[], char toStr[]){
	int j=0;
	int n=strlen(fromStr);
	while(j<n){
		toStr[n-j-1]=fromStr[j];
		j++;
	}
	printf("%s reversed as %s\n",fromStr,toStr);
		
	
}

void concat(char str1[20], char str2[20], char resultStr[40]){
	int n = strlen(str1);
	int m = strlen(str2);
	int i=0;
	while(i<n){
		resultStr[i]=str1[i];
		i++;
	}
	int j = i;
	i=0;
	while(i<m){
		resultStr[j]=str2[i];
		i++;
		j++;
	}
	printf("%s\n",resultStr);
}

void strt0k(char str5[1000]){
	int i=0,count=1;
	while(str5[i]!='\0'){
		if(str5[i]==' '|| str5[i]=='\t' || str5[i]=='\n'){
			count++;
			
		}
		i++;
	}
	printf("%i\n",count);
}
int main(){
	char str1[20],str2[20],fromStr[20],toStr[20],str3[20],str4[20],result[40],str5[1000];
	printf("1a	\n");
	scanf("%s",&str1);
	scanf("%s",&str2);
	bool i = areEqual(str1,str2);
	printf("%d\n",i);

	printf("1b	\n");
	scanf("%s",&fromStr);
	reverse(fromStr,toStr);
	
	printf("1c	\n");
	scanf("%s",&str3);
	scanf("%s",&str4);
	concat(str3,str4,result);
	printf("\n");
	
	printf("2\n");

	gets(str5);
	
	
	strt0k(str5);
}
