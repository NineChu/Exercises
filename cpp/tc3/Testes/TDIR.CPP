#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>
#include <dir.h>
#include <dirent.h>
#include <stdlib.h>

char path[1001];

void main()
{
    int Op;
    clrscr();
    cout<<"\n Gerenciador de diretorios (by NineChu)\n";
    cout<<"\n O que deseja fazer ?:\n\n Digite:\n 1 para criar um diretorio.\n 2 para deletar um diretorio.\n 3 para sair.\n\n ";
    cin>>Op;
    clrscr();
    switch(Op)
    {
	case 1:
	cout<<"\n Indique o caminho para criar um diretorio: ";
	cin>>path;
	if(opendir(path))
	{
	    cout<<"\n O diretorio j\xa0 existe.";
	} else
	{
	    mkdir(path);
	    if(!opendir(path))
	    {
		cout<<"\n Erro";
	    } else
	    {
		cout<<"\n Arquivo criado com sucesso !";
	    }
	}
	break;
	case 2:
	cout<<"\n Indique o caminho para deletar um diret�rio: ";
	cin>>path;
	if(!opendir(path))
	{
	    cout<<"\n O diretorio nao existe";
	} else
	{
	    rmdir(path);
	    if(opendir(path))
	    {
		cout<<"\n Erro Desconhecido";
	    } else
	    {
		cout<<"\n Arquivo deletado com sucesso !";
	    }
	}
	break;
	case 3: break; default: cout<<"\n Digito errado"; break;
    }
    cout<<"\n\n Pressione qualquer tecla para sair.";
    getch();
}