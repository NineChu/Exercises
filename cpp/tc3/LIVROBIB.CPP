//LivroBib.cpp

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()

{
float pc1=108.8198 ,pc2=150.4321;
clrscr();
cout<<"\nBibliografia do  LP: \n\n\n";
cout<<setprecision(2);
cout<<"\nTitulo"<<setw(30)<<"Autor"<<setw(22)<<"Editora"<<setw(10)<<"Preco"<<setw(18)<<"\n";
cout<<"\nTreinamento em C++ Modulo 1"<<setw(15)<<"V.V.MIZRAHI"<<setw(15)<<"Person"<<setw(12)<<pc1;
cout<<setfill('.');
cout<<"\nLinguagem  C++"<<setw(33)<<"J.A.N.G. Manzano"<<setw(9)<<"Erica" <<setw(13)<<pc2;

getch(); }
