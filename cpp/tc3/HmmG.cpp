#include <IOSTREAM.H>
#include <CONIO.H>
#include <STRING.H>

void main()
{
    int i = 0;
    char hmm1[1001] = "";
    char hmm2[1001] = "";
    clrscr();
    cout << "\n Digite o seu hmm:\n ";
    cin >> hmm1;
    if (hmm1[0] == 'h' && hmm1[1] == 'm' && hmm1[2] == 'm')
    {
        for (i = 0; i < strlen(hmm1); i++)
        {
            strcat(hmm2, hmm1);
        }
    }
    else
    {
        cout << "Digite um hmm descente.";
    }
    getch();
}