#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void main(){

  clrscr();

  int i;

  printf("\n Gerando 10 valores aleatorios de 1 a 80:\n\n ");

  srand(time(NULL));

  for (i=0; i < 10; i++)
  {
    printf("%d ", rand() % 80 +1);
  }
  
  getch();
}