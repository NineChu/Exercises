#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main(){

int N=0;

clrscr();

cout<<"\n Digite um numero de 0 a 15: ";
cin>>N;
while(N>=0){
	textbackground(N);
	cprintf("%i ", N);
	delay(500);
	N=N-1;
}
cout<<"\n Fim";

getch();

}