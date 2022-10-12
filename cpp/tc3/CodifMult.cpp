#include <stdio.h>
#include <conio.h>

void main(){

    int X = 4, Y = 3, Z;
    char Op;

    printf("\n Digite 3: ");
    scanf("%i", &Op);
    if(Op==3){
        Z=X*Y;
        printf("\n %i * %i = %i", X, Y, Z);
    }

    getch();
}