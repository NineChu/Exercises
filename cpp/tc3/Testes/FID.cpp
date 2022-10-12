#include <BAS.H>

void main()
{
    int iidstr = 0;
    char txt[1001], Id[11] = "0";
    FILE *pfile = fopen("c:/turboc3/registro.txt", "r");
    clrscr();
    while (fgets(txt, 1001, pfile) != NULL)
    {
        if (txt != "")
        {
            iidstr = 0;
            int ix = 0;
            int i;
            for (i = 0; i < strlen(txt); i++)
            {
                if (txt[i] == 'N')
                {
                    break;
                }
                if (txt[i] >= '0' && txt[i] <= '9')
                {
                    Id[0 + ix] = txt[i];
                    ix = ix + 1;
                }
            }
            ix = 1;
            for (i = strlen(Id); i > 0; i--)
            {
                iidstr = iidstr + ((Id[i - 1] - '0') * ix);
                ix = ix * 10;
            }
        }
    }
    iidstr = iidstr + 1;
    itoa(iidstr, Id, 10);
    fclose(pfile);
    cout << "\n O Id \x82:" << Id << ";" << iidstr << ";";
    getch();
}