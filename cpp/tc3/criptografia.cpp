#include <BAS.H>

void main()
{
    char msg[1001];
    int codr;
    clrscr();
    gotoxy(33, 2);
    cout << "Cifra de Cesar\n";
    cout << "\n Digite a sua mensagem:\n ";
    cin >> msg;
    cout << "\n Digite seu codificador (numero): ";
    cin >> codr;
    cout << "\n Sua mensagem:\n " << msg;
    for (int i = 0; i < strlen(msg); i++)
    {
        msg[i] = msg[i] + codr;
        if (msg[i] > 'z')
        {
            cout << "bondia";
        }
        while (msg[i] > 'z')
        {
            cout << "#";
            msg[i] = msg[i] - 'z' + 'a' - 1;
        }
    }
    cout << "\n\n Sua mensagem criptografada:\n " << msg;
    getch();
}