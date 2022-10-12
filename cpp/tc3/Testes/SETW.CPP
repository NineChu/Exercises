#include <bas.h>
#include <iomanip.h>

void main()
{
    clrscr();
    cout << "\n1234" << setfill('o') << setw(4+5);
    getch();
}