#include <iostream.h>
#include <conio.h>
#include <dos.h>

void main(){

int X, Y, Sair;

while(Sair==0){
    clrscr();

    cout<<"\n Tabuada";

    cout<<"\n\n Digite algum numero inteiro para realizar a tabuada: ";
    cin>>X;
    cout<<"\n";

    if(X==0){
	cout<<"\n Tabuada de 0 \x82 0";
    }else{
	Y = X * 1;
	cout<<"\n "<<X<<" X 1 = "<<Y;
	Y = X * 2;
	cout<<"\n "<<X<<" X 2 = "<<Y;
	Y = X * 3;
	cout<<"\n "<<X<<" X 3 = "<<Y;
	Y = X * 4;
	cout<<"\n "<<X<<" X 4 = "<<Y;
	Y = X * 5;
	cout<<"\n "<<X<<" X 5 = "<<Y;
	Y = X * 6;
	cout<<"\n "<<X<<" X 6 = "<<Y;
	Y = X * 7;
	cout<<"\n "<<X<<" X 7 = "<<Y;
	Y = X * 8;
	cout<<"\n "<<X<<" X 8 = "<<Y;
	Y = X * 9;
	cout<<"\n "<<X<<" X 9 = "<<Y;
	Y = X * 10;
	cout<<"\n "<<X<<" X 10 = "<<Y;
    }
    sound(440);delay(1000);nosound();

    cout<<"\n\n Quer Sair ? (1 sim / 0 nao): ";
    cin>>Sair;
    if(Sair!=0, Sair!=1){
	cout<<"\n Erro, digito errado.";
    }
}

cout<<"\n\n Pressione qualquer tecla para continuar: ";

getch();
}