#include <stdio.h>
#include <conio.h>
void main(){

char arquivo[100] = "c:/turboc3/bin/project/testa.txt";
char texto[100] = "bondia, clarp, 3424";

FILE *pfile;

clrscr();
pfile = fopen(arquivo , "a");
printf("\n Ok, se aparecer alguma coisa aq em baixo, faz o q ela ta pedindo:");
fputs(texto, pfile);
fclose(pfile);
printf("\n Vai na pasta dos projetos do turbo c, e abre o arquivo 'TESTA.txt'");

getch();
}