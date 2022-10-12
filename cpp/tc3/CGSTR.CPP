#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>
#include <dir.h>
#include <dirent.h>
#include <stdlib.h>

void main()
{
    clrscr();
    char strr[1001] = "c:/turboc3/bondia";
    char *strr1 = strrchr(strr, '/');
    cout << "\n " << strr;
    cout << "\n " << strlen(strr1);
    cout << "\n " << strr1;
    for (int i = 0; i < strlen(strr1); i++)
    {
        if (i != strlen(strr1))
        {
            strr1[i] = strr1[i + 1];
        }
        else
        {
            strr1[i] = '\x00';
        }
    }
    cout << "\n\n " << strlen(strr1);
    cout << "\n " << strr1;
    getch();
}