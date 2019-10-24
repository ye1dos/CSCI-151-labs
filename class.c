#include <stdio.h>
int main (void) {
 
 int decNum = 40;
 
 do {
 int bit = decNum % 2;
 decNum = decNum / 2;
 
 printf("bit: %i", bit);
 
 } while (decNum > 0);
 
 printf("Done.");
 return 0;
}
