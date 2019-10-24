#include <stdio.h>
#include <string.h>
#include<stdlib.h>
typedef struct {
	char name[20];
	char city[20];
	int timeZone;
	int numberOfTerminals;
	char terminals[20];
}airport;

int main(){
	airport airportList[500];
	FILE *file1;
	file1 = fopen("airports.txt","r");
char lineoffile[256];
   int i=0,j=0;
char ch;
//fgets(lineoffile, 182, file1)!=NULL
    while(fgets(lineoffile, 182, file1)!=NULL){
        fscanf(file1,"%s %i %s",airportList[i].city,&airportList[i].timeZone,airportList[i].name);
        j=0;
        printf("%s %i %s\n",airportList[i].city,airportList[i].timeZone,airportList[i].name);
        i++;
    }

	
	
	
	fclose(file1);
	return 0;
}
