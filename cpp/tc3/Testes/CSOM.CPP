#include <iostream.h>
#include <conio.h>
#include <dos.h>

void main(){

int N=0;

clrscr();

cout<<"\n Digite um numero: ";
cin>>N;
do { cout<<"\n"<<N;
	sound(500);
	delay(500);
	nosound();
	delay(500);
	N=N-1;
} while(N>0);
cout<<"\n"<<"FOGO";
sound(200);
delay(700);
nosound();

getch();

}