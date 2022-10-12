#include <stdio.h>
#include <conio.h>


void main(){
char X[21];
char Y[21];
char Z[41];

clrscr();
printf("\n Digite seu primeiro, e �ltimo nome: ");
scanf("%s", X);
scanf("%s", Y);
printf("\n\n Nome: %s", X);
printf("\n Sobrenome: %s", Y);
scanf("");

printf("\n\n Digite seu nome completo: ");
scanf("%[^\n]", Z);
printf("\n Nome completo: %s", Z);

getch();
}