//CalcHP.cpp
#include <stdio.h>
#include <conio.h>
void main()
{
float X, Y, Z;
int Op;
clrscr();
printf("\n\n Calculadora HP\n Aperte:\n 1 para soma\n 2 para subtracao\n 3 para multiplicacao\n 4 para divisao\n ou 5 para sair\n\n ");
scanf("%i", &Op);
if(Op==1){
    printf("\n Digite o valor de X: ");
    scanf("%f", &X);
    printf("\n Digite o valor de Y: ");
    scanf("%f", &Y);
    Z = X + Y;
    printf("\n Resultado: %3.1f + %3.1f = %3.1f", X, Y, Z);
} else if(Op==2){
    printf("\n Digite o valor de X: ");
    scanf("%f", &X);
    printf("\n Digite o valor de Y: ");
    scanf("%f", &Y);
    Z = X - Y;
    printf("\n Resultado: %3.1f - %3.1f = %3.1f", X, Y, Z);
} else if(Op==3){
    printf("\n Digite o valor de X: ");
    scanf("%f", &X);
    printf("\n Digite o valor de Y: ");
    scanf("%f", &Y);
    Z = X * Y;
    printf("\n Resultado: %3.1f * %3.1f = %3.1f", X, Y, Z);
} else if(Op==4){
    printf("\n Digite o valor de X: ");
    scanf("%f", &X);
    printf("\n Digite o valor de Y: ");
    scanf("%f", &Y);
    if(Y==0){
	printf("\n Erro, divisao por 0");
    } else {
	Z = X / Y;
	printf("\n Resultado: %3.1f / %3.1f = %3.1f", X, Y, Z);
    }
} else if(Op==5){
    printf("\n Pressione enter");
    }
getch();

}