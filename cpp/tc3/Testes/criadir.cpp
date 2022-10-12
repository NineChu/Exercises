#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>
#include <dir.h>
#include <dirent.h>
#include <stdlib.h>

void main()
{
    char Opcr;
    clrscr();
    gotoxy(24, 2);
    cout << "Criador de arquivos e diretorios.\n";
    cout << "\n Deseja criar um arquivo, ou um diretorio \x3f (a/d): ";
    cin >> Opcr;
    if (Opcr == 'a')
    {
        char path[1001];
        cout << "\n Indique o caminho: ";
        cin >> path;
        char bpath[1001] = "";
        int i = 0;
        for (i = 0; i < strlen(path); i++)
        {
            bpath[i] = path[i];
            if (i != strlen(path) - 1)
            {
                if (path[i + 1] == '/' || path[i + 1] == '\\')
                {
                    if (!opendir(bpath))
                    {
                        mkdir(bpath);
                    }
                }
            }
            else
            {
                FILE *pfile;
                pfile = fopen(path, "r");
                if (pfile != NULL)
                {
                    cout << "\n O arquivo ja existe.";
                }
                else
                {
                    fclose(pfile);
                    pfile = fopen(path, "a");
                    fclose(pfile);
                    pfile = fopen(path, "r");
                    if (pfile != NULL)
                    {
                        cout << "\n O arquivo foi criado com sucesso.";
                    }
                    else
                    {
                        cout << "\n Erro";
                    }
                }
                fclose(pfile);
            }
        }
    }
    else if (Opcr == 'd')
    {
        char path[1001];
        cout << "\n Indique o caminho: ";
        cin >> path;
        char bpath[1001] = "";
        int i = 0;
        for (i = 0; i < strlen(path); i++)
        {
            bpath[i] = path[i];
            if (i != strlen(path) - 1)
            {
                if (path[i + 1] == '/' || path[i + 1] == '\\')
                {
                    if (!opendir(bpath))
                    {
                        mkdir(bpath);
                    }
                }
            }
            else
            {
                if (opendir(path))
                {
                    cout << "\n O arquivo ja existe.";
                }
                else
                {
                    mkdir(path);
                    if (opendir(path))
                    {
                        cout << "\n O diretorio foi criado com sucesso.";
                    }
                    else
                    {
                        cout << "\n Erro";
                    }
                }
            }
        }
    }
    getch();
}