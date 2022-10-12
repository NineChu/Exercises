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
    char path[1001];
    clrscr();
    cout << "\n Digite o caminho: ";
    cin >> path;
    if (strcmp(path, "s") == 0)
    {
        cout << "\n Pressione qualquer tecla.";
    }
    else
    {
        if (opendir(path))
        {
            cout << "\n A pasta existe.";
        }
        else
        {
            cout << "\n A pasta n\xc6o existe.";
        }
    }
    getch();
}