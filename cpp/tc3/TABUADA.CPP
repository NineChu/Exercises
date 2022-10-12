#include <iostream.h>
#include <conio.h>
#include <dos.h>

void main(){

clrscr();

int X, Y;

cout<<"\n Tabuada";

cout<<"\n\n Digite algum numero inteiro para realizar a tabuada: ";
cin>>X;
cout<<"\n";

for(int i = 1;i<11; i++)
{
Y = X * i;
cout << "\n " << X << " X " << i << " = " << Y;
}

sound(440);delay(1000);nosound();

cout<<"\n\n Pressione qualquer tecla para continuar: ";

getch();
}