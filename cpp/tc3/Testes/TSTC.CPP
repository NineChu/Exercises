//Calcc++

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main(){

clrscr();

int X;
char Y;

cout<<"\n Bondia, digite algum numero:\n ";
cin>>X;
cout<<" "<<X;

cout<<"\n\n Digite um caractere:\n ";
cin>>Y;
cout<<" "<<Y;

float Z;

cout<<"\n\n Digite um numero decimal:\n ";
cin>>Z;
cout<<setprecision(2)<<" "<<Z;

cout<<"\n\n"<<setfill('H')<<setw(5)<<""<<setfill('M')<<setw(10)<<"";



getch();
}