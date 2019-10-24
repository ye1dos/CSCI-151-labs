#include <stdio.h>
#include <string.h> // osyny ewkawan umytpa
#include <stdlib.h>

int main(){
char a[100]= "Compotik";
char result[100];
strcpy(result,a); // бiрiншi конечный стрингты жазады 
printf("%s\n",result);


char word1[] = "Hello";
char word2[] = "Hillo";
char word3[] = "hello";
char word4[] = "Helloo";
int x = strcmp(word3,word1);
printf("%i\n",x);
// x<0 the first word comes first For ex. 1.hello 2.hillo
// x>0 the second word comes first For ex. 1.hillo 2.hello
// x=0 words are the same

// IT IS NOT EXACTLY 1 OR -1 ANY NUMBER CAN BE
char ch[] = "Hello";
char ch2[] = "Goodbye";
strcat(ch,ch2);
printf("%s\n",ch);
return 0;
}
