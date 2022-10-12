#include <bas.h>
#include <DIRENT.H>

void main()
{
    struct strc
    {
        int x;
        char y;
        struct strc1
        {
            float x;
        } z;
    } tst1;
    tst1.x = 5;
    clrscr();
    cout << tst1.x;
    getch();
}