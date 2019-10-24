#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
   char name[20];
   char city[20];
   int timeZone;
   int numberOfTerminals;
   char terminals[20];

}airport;

typedef struct{
    char airline[1];
    int number;
    int from;
    int to;
    int hour;
    int minute;
    int duration;
}flight;

void departures (char airportName[],char airportCity[],airport airportData[],flight flightSched[]){
    printf("Flight Departure - %s %s airport\n", airportCity, airportName);
    printf("Time\tFlight\t\tDestination\n");
    int index = -1;
    int j,i;
    for (j=0; j<4; j++){
        if (strcmp(airportData[j].name, airportName) == 0){
            index = j;
            break;
        }
    }
    for (i=0; i<4; i++){
        if (flightSched[i].from == index){
            printf("%02i:%02i\t%s%i\t%s-%s\n",
                   flightSched[i].hour,
                   flightSched[i].minute,
                   flightSched[i].airline,
                   flightSched[i].number,
                   airportData[flightSched[i].to].city,
                   airportData[flightSched[i].to].name);
        }
    }
    printf("\n");
}

int main(){
	char airportName[20],airportCity[20];
	airport airportData[1];
	flight flightSched[1];
	airport airportList[500];
	flight flightList[500];
	char lineoffile[256];
    FILE *file1;
    FILE *file2;
    file1=fopen("airports.txt","r");
    file2=fopen("schedule.txt","r");
	if (file1 == NULL || file2 == NULL){
		printf("Problem opening file.");
		return 1;	
   }


    int j=0,i=0;
    while(fgets(lineoffile, 182, file1)!=NULL){
        fscanf(file1," %s %i %s ",airportList[i].city,&airportList[i].timeZone,airportList[i].name);
        printf("%s %i %s\n",airportList[i].city,airportList[i].timeZone,airportList[i].name);
        j=0;
        do{
            airportList[i].terminals[j]=fgetc(file1);
            if(airportList[i].terminals[j]==32){
                continue;
            }
            if(airportList[i].terminals[j]==10){
                break;
            }
            if (airportList[i].terminals[j]==EOF){
                break;
            }
            j++;
        }while(!feof(file1));
        airportList[i].numberOfTerminals = j;
        i++;
    }

    i=0;

    do{
        char from[50];
        char fromCity[50];
        char to[50];
        char toCity[50];
        fscanf(file2,"%s %i %s %s - %s %s %i %i ", flightList[i].airline,&flightList[i].number,fromCity,from,toCity,to,&flightList[i].hour,&flightList[i].duration);
        flightList[i].minute = flightList[i].hour%100;
        flightList[i].hour/=100;
        flightList[i].from = -1;
        flightList[i].to = -1;
        for (j=0; j<4; j++){
            if (strcmp(airportList[j].name, from) == 0){
                flightList[i].from = j;
                break;
            }
        }
        for (j=0; j<4; j++){
            if (strcmp(airportList[j].name, to)==0){
                flightList[i].to = j;
                break;
            }
        }
        printf("%s %i %i - %i %i %i %i\n", flightList[i].airline,flightList[i].number,flightList[i].from,flightList[i].to,flightList[i].hour,flightList[i].minute, flightList[i].duration);
        i++;
    }while(!feof(file2));

    while (i<4){
        flightList[i].from = -1;
        i++;
    }
	i=0;
    for (i=0; i<4; i++){
        departures(airportList[i].name, airportList[i].city, airportList, flightList);
    }

    fclose (file1);
    fclose (file2);

    return 0;
}


