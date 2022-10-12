#include <arq.h>

void main(){

char file[1001];
char path[1001];
char path2[1001] = "c:/";

clrscr();
cout<<"\n Gerenciador de arquivos \n";
clrscr();
cout<<"\n Digite o caminho do arquivo: c:/";
cin>>path;
strcat(path2, path);
cout<<path2;

getch();
}