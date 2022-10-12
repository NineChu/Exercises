#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>
#include <dir.h>
#include <dirent.h>
#include <stdlib.h>

FILE *pfile;
char path[1001];

void GMak()
{
    char Op1;
    cout << "\n Deseja criar um arquivo, ou um diretorio \x3f (a/d): ";
    cin >> Op1;
    if (Op1 == 'a')
    {
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
    else if (Op1 == 'd')
    {
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
                    cout << "\n O arquivo ja existe.";
                }
            }
        }
    }
    else
    {
        cout << "\n Digito errado.";
    }
}

void GDel()
{
    char Op1;
    cout << "\n Deseja deletar um arquivo, ou um diretorio \x3f (a/d): ";
    cin >> Op1;
    if (Op1 == 'a')
    {
        cout << "\n Indique o caminho: ";
        cin >> path;
        pfile = fopen(path, "r");
        if (pfile != NULL)
        {
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
            cout << "\n O arquivo nao existe.";
        }
        fclose(pfile);
    }
    else if (Op1 == 'd')
    {
        cout << "\n Indique o caminho: ";
        cin >> path;
        if (!opendir(path))
        {
            cout << "\n O diretorio nao existe.";
        }
        else
        {
            if (rmdir(path) != 0)
            {
                cout << "\n Ocorreu um erro ao deletar o diretorio.";
            }
            else
            {
                cout << "\n O diretorio foi deletado com sucesso.";
            }
        }
    }
    else
    {
        cout << "\n Digito errado.";
    }
}

void GDsp()
{
    char txt[1001];
    cout << "\n Indique o caminho: ";
    cin >> path;
    pfile = fopen(path, "r");
    cout << "\n";
    if (pfile != NULL)
    {
        if (strcmp(fgets(txt, 1001, pfile), "") != 0)
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
            cout << "\n Nao há nada no arquivo.\n";
        }
    }
    else
    {
        cout << "\n O arquivo nao existe.\n";
    }
    fclose(pfile);
}

void AddReg()
{
    int fst = 1, iidstr = 0;
    char sair1 = 115, txt[1001], Id[11] = "0", Nome[31], Email[46], Senha[51];
    while (sair1 == 115)
    {
        pfile = fopen("c:/turboc3/contas.txt", "r");
        if (pfile != NULL)
        {
            while (fgets(txt, 1001, pfile) != NULL)
            {
                if (txt != "")
                {
                    fst = 0;
                    iidstr = 0;
                    int ix = 0;
                    int i;
                    for (i = 0; i < strlen(txt); i++)
                    {
                        if (txt[i] == 'N')
                        {
                            break;
                        }
                        if (txt[i] >= '0' && txt[i] <= '9')
                        {
                            Id[0 + ix] = txt[i];
                            ix = ix + 1;
                        }
                    }
                    iidstr = atoi(Id);
                }
            }
            iidstr = iidstr + 1;
            itoa(iidstr, Id, 10);
            fclose(pfile);
            pfile = fopen("c:/turboc3/contas.txt", "a");
            if (fst != 1)
            {
                fputs("\n", pfile);
            }
            fputs("Id: ", pfile);
            fputs(Id, pfile);
            cout << "\n Digite o Nome:\n ";
            gets(Nome);
            fputs("    Nome: ", pfile);
            fputs(Nome, pfile);
            cout << "\n Digite o E-mail:\n ";
            gets(Email);
            fputs("    E-mail: ", pfile);
            fputs(Email, pfile);
            cout << "\n Digite a Senha:\n ";
            gets(Senha);
            fputs("    Senha: ", pfile);
            fputs(Senha, pfile);
            fclose(pfile);
            cout << "\n Quer registrar mais alguma conta \x3f (s/n): ";
            cin >> sair1;
            if (sair1 != 115 && sair1 != 110)
            {
                cout << "\n Digito errado.\n";
            }
        }
        else
        {
            fclose(pfile);
            cout << "\n O arquivo nao existe.\n";
        }
    }
}

void main()
{
    int Op = 9;
    char sair = 110;

    while (sair == 110)
    {
        clrscr();
        cout << "\n Gerenciador de contas";
        cout << "\n O que deseja fazer ?:\n\n Digite:";
        cout << "\n 1 para criar um arquivo ou diretorio.\n 2 para deletar um arquivo ou diretorio.\n 3 para exibir o conteudo de um arquivo.\n 8 para sair.\n\n ";
        cin >> Op;
        clrscr();
        switch (Op)
        {
        case 1:
            GMak();
            cout << "\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case 2:
            GDel();
            cout << "\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case 3:
            GDsp();
            cout << "\n Pressione qualquer tecla para continuar.";
            getch();
            break;
        case 8:
            sair = 115;
            break;
        default:
            sair = 115;
            cout << "\n Digito errado.";
            break;
        }
    }
    cout << "\n\n Pressione qualquer tecla para continuar.";
    getch();
}