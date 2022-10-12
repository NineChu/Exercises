//TempMedia.cpp

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main(){
clrscr();
cout<<setprecision(2);
float TempMed = 0, Temp, cont = 1;
do{
cout<<"\n Ler Temp"<<cont<<": ";
cin>>Temp;
TempMed = TempMed + Temp;
cont = cont +1;
}while(cont<=7);
TempMed = TempMed/7;
cout<<"\n A temperatura m‚dia da semana \x82 "<<TempMed<<"\xF8 C";
cout<<"\n Pressione qualquer tecla.";
getch();
}