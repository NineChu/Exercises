#include <BAS.H>

void main()
{
    int Op;
    clrscr();
    cout << "\n Digite o numero: ";
    cin >> Op;
    switch (Op)
    {
    case 1:
	cout << "\n Bondia";
    case 2:
	cout << "\n Batad";
    default:
	cout << "\n Default";
    }
    cout << "\n Kbo";
    getch();
}