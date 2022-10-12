//Calc.cpp
#include <stdio.h>
#include <conio.h>
void main()
{
float X, Y, Z;
int Op;
char Sair;
clrscr();
printf("\n Calculadora\n");
printf("\n Quer Sair ? (s/n)\n\n ");
scanf("%s", &Sair);
while(Sair=='n'){
	clrscr();
	printf("\n Digite o primeiro n£mero: ");
	scanf("%f", &X);
	printf("\n Digite a operacao +(1) -(2) *(3) /(4): ");
	scanf("%i", &Op);
	if(Op==1){
		printf("\n Digite o segundo n£mero: ");
		scanf("%f", &Y);
		clrscr();
		Z = X + Y;
		printf("\n %3.1f + %3.1f = %3.1f", X, Y, Z);
	} else if(Op==2){
		printf("\n Digite o segundo n£mero: ");
		scanf("%f", &Y);
		clrscr();
		Z = X - Y;
		printf("\n Resultado: %3.1f - %3.1f = %3.1f", X, Y, Z);
	} else if(Op==3){
		printf("\n Digite o segundo n£mero: ");
		scanf("%f", &Y);
		clrscr();
		Z = X * Y;
		printf("\n Resultado: %3.1f * %3.1f = %3.1f", X, Y, Z);
	} else if(Op==4){
		printf("\n Digite o valor de Y: ");
		scanf("%f", &Y);
		clrscr();
		if(Y==0){
			printf("\n Erro, divisao por 0");
		} else {
			Z = X / Y;
			printf("\n Resultado: %3.1f / %3.1f = %3.1f", X, Y, Z);
		}
	} else {
		clrscr();
		printf("\n Erro");
	}
	printf("\n\n Quer Sair ? (s/n)\n\n ");
	scanf("%s", &Sair);
	clrscr();
}
printf("\n Pressione qualquer tecla.");
getch();
}