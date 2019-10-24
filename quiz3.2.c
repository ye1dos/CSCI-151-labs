#include <stdio.h>
int main(){
FILE *file;
file = fopen("data.txt","w");
if(file == NULL){
	printf("problem with file");
	return 1;	
}
fprintf(file,"GG");

putc('\n',file);
putc('W',file);
putc('P',file);
fclose(file);

char word[81];
fscanf(file,"%s %s %i",name,surname,ID);
}


// 																while(!feof(file))
//																while(ch!=EOF)
