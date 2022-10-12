#include <stdio.h>
#include <conio.h>

void main(){

    int X = 10, Y = 2, Z;
    char Op;

    printf("\n Digite 1: ");
    scanf("%i", &Op);
    if(Op==1){
        Z=X+Y;
        printf("\n %i + %i = %i", X, Y, Z);
    }

    getch();
}