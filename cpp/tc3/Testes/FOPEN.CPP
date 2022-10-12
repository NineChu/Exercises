#include <stdio.h>
#include <conio.h>

void main(){

char arquivo[1000];
char texto[1000];
FILE * pfile;

clrscr();
printf("\n Digite o caminho: ");
scanf("%s", arquivo);
pfile = fopen(arquivo , "r");
if(pfile==NULL){
printf("\n ERRO");
} else {
printf("\n");
while(fgets(texto, 1000, pfile)  != NULL)
printf(" %s", texto);
fclose(pfile);
}
printf("\n\n Pressione qualquer tecla para continuar.");

getch();
}