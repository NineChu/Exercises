#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <string.h>

int strfnd(char *str, char *word, int type)
{
    char check[1001] = "";
    int ret = 1, ixstr = -1, i = 0;
    for (i = 0; i < strlen(str); i++)
    {
        strcpy(check, "");
        int i1 = 0;
        for (i1 = 0; i1 < strlen(word); i1++)
        {
            if (str[i + i1] == word[i1])
            {
                check[strlen(check)] = str[i + i1];
            }
            if (i1 == strlen(word) - 1 && strcmp(check, word) == 0 && ret != 0)
            {
                ret = 0;
                if (type == 1 && ixstr == -1)
                {
                    ixstr = i;
                }
            }
        }
    }
    if (type == 0)
    {
        return (ret);
    }
    else if (type == 1)
    {
        return (ixstr);
    }
}

char *strcpyp(char *str, int idx)
{
    char *mcrstr[] = ;
    return (mcrstr);
}

void main()
{
    char DB1C[32768] = "";
    FILE *DB1 = fopen("../docs/DBs/DB1.txt", "r");
    char Face[1024] = "Top";
    cout << "\n Osno\n";
    cout << Face;
    cout << "\n ";
}