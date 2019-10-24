#include <stdio.h>
int main(){
	FILE *file1;
	FILE *file2;
	file1 = fopen("qwe.txt","r");
	file2 = fopen("qwer.txt","w");
	char name[81];
	int id;
	if(file1 == NULL ||file2 == NULL){
	printf("problem with file");
	return 1;	
}
	do{
		fscanf(file1,"%s %i",&name,&id);
		printf("%s %i",name,id);
		fprintf(file2,"%s %i",name,id);
	}while(!feof(file1));
fclose(file1);
fclose(file2);
}
