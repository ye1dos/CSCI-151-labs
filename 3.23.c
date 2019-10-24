#include <stdio.h>
int main(){
FILE *file;
FILE *file1;
file = fopen("qwe.txt", "r");
file1 = fopen("data.txt","w");

do {

    char wd[81];
    fscanf(file, "%s", wd);
    printf("'%s'\n", wd); ///// fscanf  without scapeing isteidy eken

} while (!feof(file));

fclose(file);
}
