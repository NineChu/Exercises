//CalcHPC++.cpp
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main(){

float X, Y, Z;
int Op;
char Sair;

clrscr();

textcolor(9);
cprintf("\n\n Calculadora HP");
textcolor(15);

cprintf("\n\n Quer Sair ? (s/n)\n\n ");
cscanf("%c", Sair);

while(Sair==110){

cprintf("\n Digite o valor de X: ");
cscanf(" %f", &X);

cprintf("\n Digite o operador +(1) -(2) *(3) /(4): ");
cscanf(" %i", &Op);

clrscr();
switch (Op){
    case 1:
    cprintf("\n Digite o valor de Y: ");
    cscanf(" %f", &Y);
    Z = X + Y;
    textcolor(2);
    cprintf("\n Resultado: %3.1f + %3.1f = %3.1f", X, Y, Z);
    textcolor(15);
    break;

    case 2:
    cprintf("\n Digite o valor de Y: ");
    cscanf(" %f", &Y);
    Z = X - Y;
    textcolor(2);
    cprintf("\n Resultado: %3.1f - %3.1f = %3.1f", X, Y, Z);
    textcolor(15);
    break;

    case 3:
    cprintf("\n Digite o valor de Y: ");
    cscanf(" %f", &Y);
    Z = X * Y;
    textcolor(2);
    cprintf("\n Resultado: %3.1f * %3.1f = %3.1f", X, Y, Z);
    textcolor(15);
    break;

    case 4:
    cprintf("\n Digite o valor de Y: ");
    cscanf(" %f", &Y);
    if(Y==0){
        textcolor(4);
        cprintf("\n Erro, divisao por 0");
        textcolor(15);
    } else {
        Z = X / Y;
        textcolor(2);
        cprintf("\n Resultado: %3.1f / %3.1f = %3.1f", X, Y, Z);
        textcolor(15);
    }
    break;

    default:
    textcolor(4);
    cprintf("\n Digito Errado");
    textcolor(15);
}

cprintf("\n\n Quer Sair ? (s/n)\n\n ");
cscanf(" %c", Sair);
}

//Musica:
sound(466);delay(300);nosound();delay(100);sound(392);delay(100);nosound();delay(100);sound(349);delay(300);nosound();delay(100);sound(311);delay(100);nosound();delay(100);sound(262);delay(300);nosound();delay(100);sound(294);delay(100);nosound();delay(100);sound(311);delay(500);nosound();delay(100);
//Fim musica.

cprintf("\n Pressione Qualquer Tecla.");

getch();

}