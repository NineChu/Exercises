#include <stdio.h>
#include <conio.h>

void main()
{
    char c1, c2, c3;

    clrscr();
    printf("\n Insira 3 caracteres: ");
    scanf("%c",&c1);
    scanf("%c",&c2);
    scanf("%c",&c3);
    if (c1==116 && c2==111 && c3==112){
	printf("\n 3424");
    } else {
	printf("\n %c%c%c", c1, c2, c3);
    }

    getch();
}

