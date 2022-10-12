//CalcArea.cpp
#include <iostream.h>
#include <conio.h>
#include <areas.h>
#include<dos.h>

void Beep()
{
    sound(300);delay(300);nosound();delay(300);
}
void Nome()
{
    cout<<"Lucas Tetsuo Nagasse, N17\xa7";
}
void main()
{
    clrscr();
    int op;
    float R, B, H, Area;
    cout<<"\n Calculadora de Areas:";
    cout<<"\n1_Area do Circulo:\n2_Area do Quadrado:\n3_Area do Retangulo:\n4_Area do Triangulo:\n5_Sair:\n____________________________\n Digite a opcao===> ";
    cin>>op;
    Beep();
    switch(op)
    {case 1:
	cout<<"Digite raio do Circulo: ";
	cin>>R;
	Area = ACirculo(R);
	cout<<"Area do Circulo = "<<Area;
	break;
    case 2:
	cout<<"Digite a altura do quadrado: ";
	cin>>H;
	Area = AQuadrado(H);
	cout<<"Area do quadrado = "<<Area;
	break;
    case 3:
	cout<<"Digite a base do Retangulo: ";
	cin>>B;
	cout<<"Digite a altura do Retangulo: ";
	cin>>H;
	Area = ARetangulo(B,H);
	cout<<"Area do Retangulo = "<<Area;
	break;
    case 4:
	cout<<"Digite a altura do triangulo: ";
	cin>>H;
	cout<<"Digite a base do triangulo: ";
	cin>>B;
	Area = ATriangulo(B, H);
	cout<<"Area do triangulo = "<<Area;
	break;
    case 5:
	break;
    default:
	cout<<"Op\x87\xC6o Inv\xA0lida";
	break;
    }
    cout<<"\n\nTecle algo para sair...\n\n";
    Nome();
    Beep();
    getch();
}