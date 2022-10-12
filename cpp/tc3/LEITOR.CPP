#include <stdio.h>
#include <conio.h>

void main(){

char arquivo[100];
char texto[100];
FILE * pfile;

clrscr();
printf("\n Digite o caminho: ");
scanf("%s", arquivo);
pfile = fopen(arquivo , "r");
if(pfile==NULL){
printf("\n ERRO, não foi possível abrir o arquivo.");
} else {
fscanf(pfile, "%[^\n]", texto);
printf("\n %s", texto);
fclose(pfile);
}
printf("\n\n Pressione qualquer tecla para continuar.");

getch();
}