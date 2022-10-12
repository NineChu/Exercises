#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <iomanip.h>

void main(){

clrscr();

int i;

for(i=1; i<=10; i++){
if(i<=5){
    gotoxy(i, 1); cout<<"\xDF";
}else if(i>5){
    gotoxy(i, 1); cout<<"\xDF";
    gotoxy(i-5, 1); cout<<" ";
}
delay(200);
}

getch();
}