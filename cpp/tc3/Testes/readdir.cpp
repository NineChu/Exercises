#include <bas.h>
#include <DIRENT.H>

void main()
{
    clrscr();
    DIR *dir;
    dirent *dir_entry;
    dir = opendir("c:/TURBOC3");
    while ((dir_entry = readdir(dir)) != NULL)
    {
        cout << "\n " << dir_entry->d_name;
    }
    closedir(dir);
    getch();
}

/*
1 Declara um struct com os dados do diretorio.
2 Declara uma variavel para o nome dos diretorios.
3 Abre o diretorio "c:/TURBOC3", e salva na struct.
4 Le cada ramificacao do diretorio e salva na variavel.
5 Assim como em uma string, quando ele chega no final de um diretorio, ele retorna NULL
*/