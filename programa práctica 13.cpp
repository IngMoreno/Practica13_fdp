#include<stdio.h>
#include<conio.h> 

int main (){

FILE *archivo;
char caracteres [3];
archivo =fopen ("vector.txt", "r");
if (archivo != NULL){
printf("El archivo se abri\242 correctamente\n\n");
printf("\nContenido del archivo:\n\n");
while (feof (archivo)==0){
fgets (caracteres, 3, archivo);
printf ("%s", caracteres);}
fclose (archivo);}
getch();
return 0;}
    
