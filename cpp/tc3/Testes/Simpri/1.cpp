#include <IOSTREAM.H>
#include <CONIO.H>

void main()
{
    int x = 1;
    clrscr();
    while (x <= 5)
    {
        cout << "\n Valor " << x << ":" << x;
        x = x + 1;
    }
    getch();
}