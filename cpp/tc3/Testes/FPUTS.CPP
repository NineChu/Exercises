#include <stdio.h>
#include <conio.h>
void main(){

char arquivo[100];
char texto[100];
FILE *pfile;

clrscr();
printf("Digite o caminho: ");
scanf("%s", arquivo);
pfile = fopen(arquivo , "a");
printf("\n Digite o que vocˆ quer por no arquivo:\n ");
scanf(" %[^\n]", texto);
fputs(texto, pfile);
fclose(pfile);

getch();
}