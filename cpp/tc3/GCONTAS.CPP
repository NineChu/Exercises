#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *Contas;

void Nomes();
void CriArq();
void ExbReg();
void AddReg();
void Musica();

void main()
{
    char sair = 110;

    while (sair == 110)
    {
        char Op = '3';
        clrscr();
        cout << "\n Gerenciador de contas";
        cout << "\n O que deseja fazer \x3f:\n\n Digite:\n 1 para criar um arquivo de contas.\n 2 para exibir as contas.\n 3 para registrar contas. \n 4 para sair.\n ";
        fflush(stdin);
        cin >> Op;
        clrscr();
        switch (Op)
        {
        case '1':
            CriArq();
            break;
        case '2':
            ExbReg();
            break;
        case '3':
            AddReg();
            break;
        case '4':
            Musica();
            Nomes();
            sair = 115;
            break;
        default:
            cout << "\n Digito errado.";
            break;
        }
        cout << "\n\n Pressione qualquer tecla para continuar.";
        getch();
    }
}

void Nomes()
{
    cout << "\n Lucas N17\n Mois\x82s N19\n Ricardo N25";
}

void Musica()
{
    //Musica:
    sound(466);
    delay(300);
    nosound();
    delay(100);
    sound(392);
    delay(100);
    nosound();
    delay(100);
    sound(349);
    delay(300);
    nosound();
    delay(100);
    sound(311);
    delay(100);
    nosound();
    delay(100);
    sound(262);
    delay(300);
    nosound();
    delay(100);
    sound(294);
    delay(100);
    nosound();
    delay(100);
    sound(311);
    delay(500);
    nosound();
    delay(100);
    //Fim musica.
}

void CriArq()
{
    char sob;
    Contas = fopen("c:/turboc3/contas.txt", "r");
    if (Contas != NULL)
    {
        fclose(Contas);
        cout << "\n Ja existe um arquivo de contas, deseja sobrescreve-lo \x3f (s/n): ";
        cin >> sob;
        if (sob == 115)
        {
            Contas = fopen("c:/turboc3/contas.txt", "w");
            if (Contas != NULL)
            {
                cout << "\n Arquivo sobrescrito com sucesso \x21\n";
            }
            else
            {
                cout << "\n ERRO\n";
            }
            fclose(Contas);
        }
        else if (sob == 110)
        {
        }
        else
        {
            cout << "\n Digito errado.\n";
        }
    }
    else
    {
        fclose(Contas);
        Contas = fopen("c:/turboc3/contas.txt", "w");
        if (Contas != NULL)
        {
            cout << "\n Arquivo criado com sucesso \x21\n";
        }
        else
        {
            cout << "\n ERRO\n";
        }
        fclose(Contas);
    }
}

void ExbReg()
{
    char txt[10001];
    Contas = fopen("c:/turboc3/contas.txt", "r");
    cout << "\n";
    if (Contas != NULL)
    {
        fgets(txt, 1001, Contas);
        if (strcmp(txt, "") == 0)
        {
            cout << "\n Nao ha nenhuma conta registrada.\n";
        }
        else
        {
            do
            {
                cout << " " << txt;
            } while (fgets(txt, 1001, Contas) != NULL);
        }
    }
    else
    {
        cout << "\n O arquivo nao existe.\n";
    }
    cout << "\n";
    fclose(Contas);
}

void AddReg()
{
    int fst = 1, iidstr = 0;
    char sair1 = 115, txt[10001], Id[11] = "0", Nome[31], Email[46], Senha[51];
    while (sair1 == 115)
    {
        Contas = fopen("c:/turboc3/contas.txt", "r");
        if (Contas != NULL)
        {
            while (fgets(txt, 1001, Contas) != NULL)
            {
                fst = 0;
                iidstr = 0;
                int ix = 0;
                int i = 0;
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
            iidstr = iidstr + 1;
            itoa(iidstr, Id, 10);
            fclose(Contas);
            Contas = fopen("c:/turboc3/contas.txt", "a");
            if (fst != 1)
            {
                fputs("\n", Contas);
            }
            cout << "\n Digite o Nome:\n ";
            fflush(stdin);
            gets(Nome);
            cout << "\n Digite o E-mail:\n ";
            fflush(stdin);
            gets(Email);
            cout << "\n Digite a Senha:\n ";
            fflush(stdin);
            gets(Senha);
            fputs("Id: ", Contas);
            fputs(Id, Contas);
            fputs("    Nome: ", Contas);
            fputs(Nome, Contas);
            fputs("    E-mail: ", Contas);
            fputs(Email, Contas);
            fputs("    Senha: ", Contas);
            fputs(Senha, Contas);
            fclose(Contas);
            cout << "\n Quer registrar mais alguma conta \x3f (s/n): ";
            cin >> sair1;
            if (sair1 != 115 && sair1 != 110)
            {
                cout << "\n Digito errado.\n";
            }
        }
        else
        {
            fclose(Contas);
            cout << "\n O arquivo nao existe.\n";
            sair1 = 110;
        }
    }
}