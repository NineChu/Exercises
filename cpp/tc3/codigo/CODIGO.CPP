#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

void main()
{
    int n = 0, vidas = 3, scorebst = 0, tempscore = 0, nv = 1;
    char sair = 110, nc[3] = "", nome[7] = "", txt[16384] = "", nomebst[7] = "", vidasc[3] = "";
    clrscr();
    while (nv == 1)
    {
        cout << "\n Digite seu nome (ate 6 caracteres e nao pode conter \"): \n";
        cin >> nome;
        for (int i = 0; i < strlen(nome); i++)
        {
            if (nome[i] == '\"' || nome[i] == '\n')
            {
                nome[i] = '_';
                clrscr();
                cout << "\n Digite um nome valido";
            }
            else if (i == strlen(nome) - 1)
            {
                nv = 0;
            }
        }
    }
    while (sair == 110)
    {
        srand(time(NULL));
        n = rand() % 100;
        vidas = 3;
        while (vidas > 0)
        {
            clrscr();
            cout << "\n Chute um numero entre 0 e 99 (" << vidas;
            if (vidas != 1)
            {
                cout << " tentativas): ";
            }
            else
            {
                cout << " tentativa): ";
            }
            cin >> nc;
            if (atoi(nc) == n)
            {
                cout << "\n Voce acertou \x21";
                break;
            }
            else
            {
                vidas--;
                cout << "\n Voce errou";
                cout << "\n Pressione qualquer tecla para continuar.";
                getch();
            }
        }
        itoa(vidas, vidasc, 10);
        FILE *pfile = fopen("c:/turboc3/bin/project/codigo/DB.txt", "a");
        fputs("\"", pfile);
        fputs(nome, pfile);
        fputs("\"", pfile);
        fputs(":", pfile);
        fputs(vidasc, pfile);
        fclose(pfile);
        cout << "\n Sua pontuacao: " << vidas;
        cout << "\n Quer sair ? (s/n): ";
        cin >> sair;
    }
    FILE *pfile = fopen("c:/turboc3/bin/project/codigo/DB.txt", "r");
    fgets(txt, 16384, pfile);
    int hasdq = 0;
    for (int i = 0; i < strlen(txt); i++)
    {
        if (txt[i] == '\"')
        {
            if (hasdq == 0)
            {
                hasdq = 1;
            }
            else
            {
                hasdq = 0;
            }
            continue;
        }
        if (hasdq == 0)
        {
            if (txt[i] == ':')
            {
                tempscore = txt[i + 1] - '0';
                if (tempscore >= scorebst) // caso queira que o primeiro score seja salvo, troque >= por >
                {
                    scorebst = tempscore;
                    strcpy(nomebst, "");
                    int ndq = 0;
                    for (int i1 = 1; i1 <= i; i1++)
                    {
                        if (txt[i - i1] == '\"')
                        {
                            ndq++;
                        }
                        if (ndq == 2)
                        {
                            ndq = 0;
                            for (int i2 = 1; i2 < i1 - 1; i2++)
                            {
                                char tempch[2] = "";
                                tempch[0] = txt[i - i1 + i2];
                                strcat(nomebst, tempch);
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    fclose(pfile);
    cout << "\n Melhor jogador: " << nomebst << ": " << scorebst;
    cout << "\n Pressione qualquer tecla para sair.";
    getch();
}