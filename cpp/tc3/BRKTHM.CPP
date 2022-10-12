#include <conio.h>
#include <dos.h>
#include <stdio.h>
void main(){

clrscr();

printf("\n Pressione qualquer tecla.");
scanf("%c");
//Musica:
sound(466);delay(300);nosound();delay(100);sound(392);delay(100);nosound();delay(100);sound(349);delay(300);nosound();delay(100);sound(311);delay(100);nosound();delay(100);sound(262);delay(300);nosound();delay(100);sound(294);delay(100);nosound();delay(100);sound(311);delay(500);nosound();delay(100);
//Fim musica.

getch();
}
