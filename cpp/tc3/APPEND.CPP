#include <stdio.h>
#include <conio.h>

void main(){

char file[1001];
char path[1001];
char txt[1001];
char txt2[1001];
char append;
char create;
char sair=110;
FILE * pfile;

clrscr();
while(sair==110){
printf("\n Explorador de arquivos (by Lucas)\n");
clrscr();
printf("\n Digite o caminho do arquivo: c:/");
scanf(" %s", path);
sprintf(file, "c:/%s", path);
pfile = fopen(file, "r");
if(pfile==NULL){
printf("\n ERRO, o arquivo nao pode ser encontrado, quer criar um novo arquivo ? (s/n): ");
scanf(" %c", &create);
if(create==115){
fclose(pfile);
pfile = fopen(file, "a");
printf("\n Arquivo criado com sucesso!");
fclose(pfile);
pfile = fopen(file, "r");
} else if(create==110){}
else{
printf("\n D¡gito Errado.");
}
} if(pfile!=NULL) {
printf("\n");
while(fgets(txt, 1001, pfile) !=NULL){
printf(" ");
puts(txt);
}
fclose(pfile);

printf("\n Voce quer acrescentar algo ? (s/n): ");
scanf(" %c", &append);
if(append==110){}
else if(append==115){
while(append==115){
pfile = fopen(file, "a");
printf("\n Digite o que voce quer acrescentar:\n ");
fflush(stdin);
gets(txt2);
fputs(txt2, pfile);
fclose(pfile);
printf("\n Quer acrescentar mais alguma coisa ? (s/n): ");
scanf(" %c", &append);
if(append!=115 && append!=110){
printf("\n Digito errado.");
}
}
} else{
printf("\n Digito errado.");
}
}
printf("\n Quer sair ? (s/n): ");
scanf(" %c", &sair);
}
printf("\n\n Pressione qualquer tecla para continuar.");

getch();
}