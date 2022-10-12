#include <conio.h>
#include <dos.h>
#include <stdio.h>
void main(){

clrscr();

printf("\n Pressione qualquer tecla.");
scanf("%c");
//Musica:
sound(262);
delay(500);
sound(294);
delay(500);
nosound();
delay(100);
//Fim musica.

getch();
}