#include <stdio.h>
int main(){
	char ch;
	int count = 0,count1=1,count2=1,c=0,d=0;
	FILE *file;
	file = fopen("data.txt", "r");
 
 if (file == NULL) {
 printf("Problem opening file.");
 return 1;
 }
 
	do{
	fscanf(file, "%c",&ch);
	count++;
	if(ch==' '){
		count--;
		count1++;
	}
	if(ch=='\n'){
		count2++;
		count--;
		count1++;
	}
	if(ch=='g'){
		c++;
	}
	if(ch=='G'){
	d++;
	}
	printf("%c", ch);
}while(!feof(file));
printf("\n");
printf("Number of the characters in a text file: %i\n",count-1);
printf("Number of the words in a text file: %i\n",count1);
printf("Number of the lines in a text file: %i\n",count2);
printf("%i\n",c+d);
printf("%i",d);
fclose(file);
return 0;
}
