//MF.cpp

#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
void main()
{
   clrscr();
   char  Turma[12], Disc[12], Nome[20];
   int  N;
   float NT1,NT2,NT3,MF;
   cout<<setprecision(1);
   cout<<"\nDigite sua Turma:  ";
   cin>>Turma;
   cout<<"\nDigite  a Disciplina :  ";
   cin>>Disc;
   cout<<"\nDigite seu Numero:  ";
   cin>>N;
   cout<<"\nDigite seu Nome:   ";
   cin>>Nome;
   cout<<"\nDigite NT1:  ";
   cin>>NT1;
   cout<<"\nDigite NT2:  ";
   cin>>NT2;
   cout<<"\nDigite NT3:  ";
   cin>>NT3;

  MF=(3*NT1 + 3* NT2 + 4*NT3)/10;

   cout<<"\nBoletim    Turma: "<<Turma<<"    Disciplina: "<<Disc;
   cout<<"\nN: "<<N<<"          Nome:  "<<Nome;
   cout<<"\nNT1: "<<NT1<<"     NT2: "<<NT2<<"     NT3: "<<NT3;
   cout<<"\nMF: "<<MF;

if(MF>=6.0)
	cout<<"\nOBS: PROMOVIDO";
	else
	cout<<"\nOBS: Em Recup. Final";

getch();
}