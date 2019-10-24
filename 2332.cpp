#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUMBER_OF_FLIGHTS 50
#define NUMBER_OF_AIRPORTS 4

void perfect(int a){

}

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
    //printf ("Files opened successfully\n");


    int i=0,j=0;
    i=0;

    do{
        char from[NUMBER_OF_FLIGHTS];
        char fromCity[NUMBER_OF_FLIGHTS];
        char to[NUMBER_OF_FLIGHTS];
        char toCity[NUMBER_OF_FLIGHTS];
        fscanf(file2,"%s %i %s %s - %s %s %i %i ", flightList[i].airline,&flightList[i].number,fromCity,from,toCity,to,&flightList[i].hour,&flightList[i].duration);
        flightList[i].minute = flightList[i].hour%100;
        flightList[i].hour/=100;
        flightList[i].from = -1;
        flightList[i].to = -1;
        for (j=0; j<4; j++){
            if (strcmp(Airportlist[j].name, from) == 0){
                flightList[i].from = j;
                break;
            }
        }

        printf("%s %i %i - %i %i %i %i\n", flightList[i].airline,flightList[i].number,flightList[i].from,flightList[i].to,flightList[i].hour,flightList[i].minute, flightList[i].duration);
        i++;
    }while(!feof(file2));
    
    fclose (file1);
    fclose (file2);

    return 0;
}


