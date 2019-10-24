#include <stdio.h>
#include <string.h> // osyny ewkawan umytpa

int main(){
char a[100];
int i;
a[0]='S';
a[1]='e';
a[2]='x';
for(i=0;i<32;i++){
	printf("%c %i\n",a[i],(int)a[i]);
}

char name[32] = "John"  "Smith"; // обязательно " " болуы керек
// qanwa probel bolsa da birge jazilady eken
printf("%s\n",name);
// \0 - NULL character

//atoi larda ("Kalaysyn 1234") bolsa 0 dep wygarady not error










return 0;
}
