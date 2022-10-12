#include <stdio.h>
#include <conio.h>

void main(){
   int X;

   clrscr();
   printf("\n Verificar se o n£mero ‚ par, ou impar.");
   printf("\n\n Digite um n£mero inteiro: ");
   scanf("%i", &X);
   if (X%2==0){
   printf("\n Este n£meor ‚ par.");
   } else{
   printf("\n Este n£mero ‚ ¡mpar.");
   }
   getch();
}