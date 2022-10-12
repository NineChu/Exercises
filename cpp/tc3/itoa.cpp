#include <iostream.h>
#include <conio.h>
#include <string.h>

char si[32];
int exp = 0;

char* itoa1(int ibf)
{
    if (ibf > 9)
    {
        int x = ibf / 10;
        itoa1(x);
        exp = exp * 10;
        ibf = ibf - exp;
        itoa1(ibf);
    } else {
        exp = exp + ibf;
        char temp[32];
        temp[0] = '0' + ibf;
        strcat(si, temp);
    }
    return si;
}

char* itoa(int x1) {
    char x2[32];
    strcpy(x2, itoa1(x1));
    strcpy(si, "");
    exp = 0;
    return x2;
}

void main()
{
    clrscr();
    cout << itoa(4821);
    getch();
}