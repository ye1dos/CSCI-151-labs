#include <stdio.h>
typedef struct{
	int month;
	int day;
	int year;
}date;
int main(){
date today;
today.day = 22;
today.month = 02;
today.year = 2019;
printf("Today is:%i %i %i",today.day,today.month,today.year);
}
