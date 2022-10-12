//MF.cpp
#include<conio.h>
#include<stdio.h>
void main()
{
   clrscr();
   char  Turma[12], Disc[12], Nome[20];
   int  N;
   float NT1,NT2,NT3,MF;
   printf("\n Digite sua Turma:  ");
   scanf("%s", Turma);
   printf("\n Digite  a Disciplina :  ");
   scanf("%s", Disc);
   printf("\n Digite seu Numero:  ");
   scanf("%i", &N);
   printf("\n Digite seu Nome:   ");
   scanf("%s", Nome);
   printf("\n Digite NT1:  ");
   scanf("%f", &NT1);
   printf("\n Digite NT2:  ");
   scanf("%f", &NT2);
   printf("\n Digite NT3:  ");
   scanf("%f", &NT3);

  MF=(3*NT1 + 3* NT2 + 4*NT3)/10;

   printf("\n Boletim    Turma: %s    Disciplina: %s", Turma, Disc);
   printf("\n N: %i          Nome:  %s", N,Nome);
   printf("\n NT1: %4.1f     NT2: %4.1f     NT3: %4.1f ",NT1,NT2,NT3);
   printf("\n MF: %5.1f ",MF);

if(MF>=6.0)
	printf("\n OBS: PROMOVIDO");
	else
	printf("\n OBS: Em Recup. Final");

getch();
      }
