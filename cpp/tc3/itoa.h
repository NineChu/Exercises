#include <string.h>

char si[32];
int exp = 0;

char* itoa(int ibf)
{
    if (ibf > 9)
    {
        int x = ibf / 10;
        itoa(x);
        exp = exp * 10;
        ibf = ibf - exp;
        itoa(ibf);
    } else {
        exp = exp + ibf;
        char temp[32];
        temp[0] = '0' + ibf;
        strcat(si, temp);
    }
    return si;
}