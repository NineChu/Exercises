#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
using namespace std;

FILE *pfile;
char path[1001];
int srchfndd = 1;

void GMak()
{
    char Op1 = 'y';
    cout << "\n Deseja criar um arquivo, ou um diretorio \x3f (a/d): ";
    cin >> Op1;
    if (Op1 == 'a')
    {
        cout << "\n Indique o caminho:\n ";
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
                if ((pfile = fopen(path, "r")) != NULL)
                {
                    cout << "\n O arquivo ja existe.";
                }
                else
                {
                    fclose(pfile);
                    pfile = fopen(path, "a");
                    fclose(pfile);
                    if ((pfile = fopen(path, "r")) != NULL)
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
    else if (Op1 == 'd')
    {
        cout << "\n Indique o caminho:\n ";
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
                if (!opendir(path))
                {
                    mkdir(path);
                    if (!opendir(path))
                    {
                        cout << "\n Erro";
                    }
                    else
                    {
                        cout << "\n O diretorio foi criado com sucesso.";
                    }
                }
                else
                {
                    cout << "\n O diretorio ja existe.";
                }
            }
        }
    }
    else
    {
        cout << "\n Digito errado.";
    }
}

//GDel began

int DelDir(char *pathdir)
{
    if (rmdir(pathdir) != 0)
    {
        DIR *dir = opendir(pathdir);
        dirent *pathrd;
        int i = 0;
        while ((pathrd = readdir(dir)))
        {
            i++;
            char path2[10001] = "";
            strcat(path2, pathdir);
            strcat(path2, "/");
            strcat(path2, pathrd->d_name);
            if (i <= 2)
            {
                continue;
            }
            if (remove(path2) != 0)
            {
                if (rmdir(path2) != 0)
                {
                    DelDir(path2);
                }
            }
        }
        closedir(dir);
        rmdir(pathdir);
    }
}

void GDel()
{
    char Op1;
    cout << "\n Deseja deletar um arquivo, ou um diretorio \x3f (a/d): ";
    cin >> Op1;
    if (Op1 == 'a')
    {
        cout << "\n Indique o caminho:\n ";
        cin >> path;
        if ((pfile = fopen(path, "r")) != NULL)
        {
            fclose(pfile);
            if (remove(path) != 0)
            {
                cout << "\n Ocorreu um erro ao deletar o arquivo.";
            }
            else
            {
                cout << "\n Arquivo deletado com sucesso.";
            }
        }
        else
        {
            fclose(pfile);
            cout << "\n O arquivo nao existe.";
        }
    }
    else if (Op1 == 'd')
    {
        cout << "\n Indique o caminho:\n ";
        cin >> path;
        if (!opendir(path))
        {
            cout << "\n O diretorio nao existe.";
        }
        else
        {
            DelDir(path);
            if (!opendir(path))
            {
                cout << "\n O diretorio foi deletado com sucesso.";
            }
            else
            {
                cout << "\n Ocorreu um erro ao deletar o diretorio.";
            }
        }
    }
    else
    {
        cout << "\n Digito errado.";
    }
}

//GDel end

void GDsp()
{
    char txt[1001];
    cout << "\n Indique o caminho:\n ";
    cin >> path;
    if ((pfile = fopen(path, "r")) != NULL)
    {
        cout << "\n";
        if (fgets(txt, 1001, pfile) != 0x00)
        {
            fclose(pfile);
            pfile = fopen(path, "r");
            while (fgets(txt, 1001, pfile) != NULL)
            {
                cout << " " << txt;
            }
        }
        else
        {
            cout << "\n Nao ha nada no arquivo.\n";
        }
    }
    else
    {
        cout << "\n O arquivo nao existe.\n";
    }
    fclose(pfile);
}

void GAlt()
{
    int fst = 1, iidstr = 0;
    char txt[10001] = "", append[10001] = "";
    cout << "\n Indique o caminho:\n ";
    cin >> path;
    if ((pfile = fopen(path, "r")) != NULL)
    {
        cout << "\n Arquivo encontrado \x21";
        if (fgets(txt, 1001, pfile) != 0x00)
        {
            fclose(pfile);
            pfile = fopen(path, "r");
            cout << "\n Conteudo:\n\"";
            while (fgets(txt, 1001, pfile) != NULL)
            {
                cout << txt;
            }
            fclose(pfile);
            cout << "\"\n\n Deseja adicionar algo ou sobrescrever o conteudo do arquivo \x3f (a/s): ";
            cin >> Op1;
            if (Op1 == 'a')
            {
                pfile = fopen(path, "a");
                cout << "\n Digite o conteudo:\n ";
                fflush(stdin);
                gets(append);
                fputs(append, pfile);
                fclose(pfile);
            }
            else if (Op1 == 's')
            {
                pfile = fopen(path, "w");
                cout << "\n Digite o novo conteudo:\n ";
                fflush(stdin);
                gets(append);
                fputs(append, pfile);
                fclose(pfile);
            }
            else
            {
                cout << "\n Digito errado";
            }
        }
        else
        {
            fclose(pfile);
            cout << "\n Nao ha nada no conteudo do arquivo.";
            pfile = fopen(path, "a");
            cout << "\n Digite o conteudo:\n ";
            fflush(stdin);
            gets(append);
            fputs(append, pfile);
            fclose(pfile);
        }
    }
    else
    {
        fclose(pfile);
        cout << "\n O arquivo nao existe.";
    }
}

//GFnd began

int strfnd(char *str, char *word)
{
    char check[1001] = "";
    int ret = 1, i = 0;
    for (i = 0; i < strlen(str); i++)
    {
        strcpy(check, "");
        int i1 = 0;
        for (i1 = 0; i1 < strlen(word); i1++)
        {
            if (str[i + i1] == word[i1])
            {
                check[strlen(check)] = str[i + i1];
            }
            if (i1 == strlen(word) - 1 && strcmp(check, word) == 0 && ret != 0)
            {
                ret = 0;
            }
        }
    }
    return (ret);
}

int FndDir(char *pathdir, char *search1)
{
    if (opendir(pathdir))
    {
        DIR *dir = opendir(pathdir);
        dirent *pathrd;
        int i = 0;
        while ((pathrd = readdir(dir)))
        {
            i++;
            char path2[10001] = "";
            strcat(path2, pathdir);
            strcat(path2, "/");
            strcat(path2, pathrd->d_name);
            if (i <= 2)
            {
                continue;
            }
            if (strfnd(pathrd->d_name, search1) == 0)
            {
                if (srchfndd == 1)
                {
                    srchfndd = 0;
                }
                if (!opendir(path2))
                {
                    cout << " arq:";
                }
                else
                {
                    cout << " dir:";
                }
                cout << " " << pathdir << "\\" << pathrd->d_name << "\n";
            }
            if (opendir(path2))
            {
                FndDir(path2, search1);
            }
        }
        closedir(dir);
    }
    return (srchfndd);
}

void GFnd()
{
    char search[1001];
    cout << "\n Indique o caminho:\n ";
    cin >> path;
    if (!opendir(path))
    {
        cout << "\n Diretorio nao encontrado";
    }
    else
    {
        cout << "\n Digite o que voce quer encontrar (difere maiusculo de minusculo): ";
        cin >> search;
        cout << "\n";
        if (FndDir(path, search) != 0)
        {
            cout << " Nada encontrado";
        }
        srchfndd = 1;
    }
}

//GFnd end

main()
{
    char sair = 110, Op = '9';

    while (sair == 110)
    {
        system("cls");
        cout << "\n Gerenciador de contas";
        cout << "\n O que deseja fazer ?:\n\n Digite:";
        cout << "\n 1 para criar um arquivo ou diretorio.\n 2 para deletar um arquivo ou diretorio.\n 3 para exibir o conteudo de um arquivo.\n 4 para alterar um arquivo.\n 5 para pesquisar arquivos ou diretorios.\n 6 para sair.\n\n ";
        fflush(stdin);
        cin >> Op;
        system("cls");
        switch (Op)
        {
        case '1':
            GMak();
            cout << "\n\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case '2':
            GDel();
            cout << "\n\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case '3':
            GDsp();
            cout << "\n\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case '4':
            GAlt();
            cout << "\n\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case '5':
            GFnd();
            cout << "\n\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case '6':
            sair = 115;
            break;
        default:
            cout << "\n Digito errado.";
            cout << "\n\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        }
    }
    cout << "\n Pressione qualquer tecla para continuar.";
    getch();
}