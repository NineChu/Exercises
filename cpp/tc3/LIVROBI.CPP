//LivroBib.cpp
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
void main()
{

clrscr();

float pc1=108.8198 , pc2=150.4321;

cout<<"\nBibliografia do LP: \n\n\n";
cout<<setprecision(2);
cout<<"Titulo"<<setw(24)<<"Autor"<<setw(40)<<"Editora"<<setw(10)<<"Preco"<<setw(18);
cout<<"\nTreinamento em C++"<<setw(25)<<"V.V.MIZRAHI"<<setw(13)<<"Person"<<setw(12)<<pc1;
cout<<setfill('.');
cout<<"\nEstudo Dirigido em Ling.C"<<setw(18)<<"J.A.Manzano"<<setw(12)<<"Erica"<<setw(13)<<pc2;
getch();
}