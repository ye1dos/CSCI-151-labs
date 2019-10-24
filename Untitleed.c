#include <stdio.h>
void perfect(int a){
	int i,result=0,sum=0;
	scanf("%i",&a);
	for(i=1; i<=a-1;i++){
	result = a%i;
	if(result==0){
		sum = sum+i;	
	}
	}
	if(sum==a){
		printf("Number is perfect number");
	}
	else{
		printf("Number is not perfect number");
	}
	
}

typedef struct{
	int id;
	char type;
	double balance;	
}BankCustomer;

int main(){
	printf("First task\n");
	int max=0,min=1000000,j=0;
	double average,sum=0,sum1=0;
	FILE *file;
	file = fopen("accounts.txt","r");
	BankCustomer bank;
	do {
		fscanf(file,"%i %c %lf",&bank.id,&bank.type,&bank.balance);
		printf("%i %c %lf\n",bank.id,bank.type,bank.balance);
		sum1 = sum1 + bank.balance;
		if(bank.type=='s'){
			if(bank.balance<min){
				min = bank.balance;
			}
		}
		if(bank.type=='c'){
			if(bank.balance>max){
				max = bank.balance;
			}
		}
		if(bank.type=='d'){
			sum = sum + bank.balance;
			j++;
		}
	}while(!feof(file));
	average = sum/j;	
	printf("\n%i\n",max);
	printf("%i\n",min);
	printf("%lf\n",average);
	printf("%lf",sum1);
	
	printf("\n");
	printf("\n");
	printf("Second task\n");
	int a;
	perfect(a);
}
