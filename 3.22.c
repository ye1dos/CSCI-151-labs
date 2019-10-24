#include <stdio.h>
int main() {
 
 FILE *infile;
 FILE *outfile;
 infile  = fopen("qwe.txt", "r");
 outfile = fopen("output.txt", "w");
 
 char name[81];
 int age, id;
 
 do {
 fscanf(infile, "%s %i %i", name, &age, &id);
 fprintf(outfile, "Record: %s, %i, %i \n", name, age, id);
 
 printf("Record: %s, %i, %i \n", name, age, id);
 
 } while (!feof(infile));
 
 fclose(infile);
 fclose(outfile);
 
    return 0;
}
