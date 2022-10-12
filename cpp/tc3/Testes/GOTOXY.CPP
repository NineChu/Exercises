#include <dos.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <ctype.h>

void main(){

char Sair;
clrscr();
do{
    textcolor(4);
    gotoxy(15, 1); cprintf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
    gotoxy(15, 2); cout<<"\xDFO\xDF\xDF\xDF\xDFO\xDF";

    gotoxy(15, 3); cprintf("HMM");
    gotoxy(15, 4); cout<<"hmm";
    delay(80);
    cout<<"\n Quer rodar denovo ? (s/n)";
    cin>>Sair;
}while(Sair=='s');
}