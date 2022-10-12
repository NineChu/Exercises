#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip.h>
#include <dos.h>
#include <time.h>
#include <stdio.h>

void main(){

int A;
int B;
int C;
int D;
int E;
int F;
int Sair = 0;

while(Sair==0){
clrscr();

A = 0;
B = 0;
srand(time(NULL));
C = rand() %50 +1;
delay(1000);
srand(time(NULL));
rand();
D = rand() %50 +1;
E = 0;
F;
if(C>=D){
    F = C;
}else{
    F = D;
}

cout<<"\n Pressione qualquer tecla para iniciar a corrida: ";
getch();

for(E=0; E!=F; E++){
    clrscr();
    cout<<"\n\n "<<setfill(' ')<<setw(A + 9)<<"\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC";
    cout<<"\n "<<setfill('.')<<setw(A + 9)<<"\xDFO\xDF\xDF\xDF\xDFO\xDF";

    cout<<"\n "<<setfill(' ')<<setw(B + 9)<<"\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC";
    cout<<"\n "<<setfill('.')<<setw(B + 9)<<"\xDFO\xDF\xDF\xDF\xDFO\xDF";
    if(A<=C){A = A +1;}
    if(B<=D){B = B +1;}
    delay(100);
}

if(C-D>1){
cout<<"\n\n O carro 1 ganhou !!!";
}else if(D-C>1){
cout<<"\n\n O carro 2 ganhou !!!";
}else{
cout<<"\n\n EMPATE !!!";
}

cout<<"\n\n Quer sair ? (1/0): ";
cin>>Sair;
if(Sair!=0, Sair!=1){
    cout<<"\n Digito errado";
}
}

cout<<"\n\n Pressione qualquer tecla para continuar: ";

getch();
}