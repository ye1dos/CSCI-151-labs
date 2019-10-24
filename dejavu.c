#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUMBER_OF_FLIGHTS 50
#define NUMBER_OF_AIRPORTS 4
typedef struct{
   char name[50];
   char city[50];
   int timeZone;
   int numberOfTerminals;
   char terminals[50];

}airport;

typedef struct{
    char airline[2];
    int number;
    int from;
    int to;
    int hour;
    int minute;
    int duration;
}flight;

int main(){
	
char lineoffile[256];
    airport Airportlist[NUMBER_OF_AIRPORTS];
    flight flightList[NUMBER_OF_FLIGHTS];
    FILE *file1;
    FILE *file2;
    file1=fopen("airports.txt","r");
    file2=fopen("schedule.txt","r");

    if (file1==NULL||file2==NULL){
        printf("problem with opening files");
        return 1;
    }
    int i=0,j=0;
    while(fgets(lineoffile, 256, file1)!=NULL){
        fscanf(file1,"%s %i %s ",Airportlist[i].city,&Airportlist[i].timeZone,Airportlist[i].name);
        printf("%s %i %s\n",Airportlist[i].city,Airportlist[i].timeZone,Airportlist[i].name);
        j=0;
        do{
            Airportlist[i].terminals[j]=fgetc(file1);
            if(Airportlist[i].terminals[j]==32){
                continue;
            }
            if(Airportlist[i].terminals[j]==10){
                break;
            }
            if (Airportlist[i].terminals[j]==EOF){
                break;
            }
            j++;
        }while(!feof(file1));
        Airportlist[i].numberOfTerminals = j;
        i++;
    }

    fclose (file1);
    fclose (file2);

    return 0;
}


