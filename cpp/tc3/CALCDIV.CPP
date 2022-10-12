//calcDiv.cpp
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float X, Y, Z;
printf("\nDigite o valor de X fload:  ");
scanf("%f", &X);
printf("\nDigite o valor de Y fload:  ");
scanf("%f", &Y);
if(Y==0)
    { printf("\nErro, div por 0");
    } else {
	      Z = X / Y;
	      printf("\nResultado: %3.1f / %3.1f = %3.1f ", X, Y, Z);
	       }
getch();

}