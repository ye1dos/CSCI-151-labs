#include <stdio.h>
typedef struct{
	int id;
	char type;
	int balance;	
}BankCustomer;

int main(){
	int min,max=0,aver=0,i=0,sum=0,sum1=0;
	FILE *file;
	file = fopen("accounts.txt","r");
	BankCustomer bank[1000];
	do {
		fscanf(file,"%i %c %i",&bank[i].id,&bank[i].type,&bank[i].balance);
		printf("%i %c %i\n",bank[i].id,bank[i].type,bank[i].balance);
		if(bank[i].type=='s'){
			if(bank[i].balance<min){
				min = bank[i].balance;
			}
			}
		if(bank[i].type=='c'){
			if(bank[i].balance>max){
				max = bank[i].balance;
			}
			}
		if(bank[i].type=='d'){
			sum = sum + bank[i].balance;
		}
		i++;
		sum1 = bank[i].balance;
	}while(!feof(file));
	aver = sum/i;
	printf("%i\n",max);
	printf("%i\n",min);
	printf("%i\n",aver);
	printf("%i",sum1);//
	
	//////s 150
	/////c 
	
}
