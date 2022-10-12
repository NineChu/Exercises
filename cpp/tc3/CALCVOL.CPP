#include <arq.h>

float vx, vy, vz, vol;

float Cubo(float x)
{
    return(x*x*x);
}
float Retangulo(float x, float y, float z)
{
    return(x*y*z);
}
float Esfera(float r)
{
    return(4*3.14159265*r*r*r/3);
}
float Cilindro(float r, float h)
{
    return(3.14159265*r*r*h);
}

void main()
{
    int Op;
    char sair = 0;
    while(sair == 0)
    {
    clrscr();
    cout << "\n Calculadora de volume, o que deseja fazer ?:\n Digite:\n 1 para cubo.\n 2 para ret\x83ngulo.\n 3 para Esfera.\n 4 para Cilindro.\n 5 para sair.\n ";
    cin >> Op;
    switch(Op)
    {
    case 1:
	cout << "\n Digite o tamanho de um dos lados do cubo: ";
	cin >> vx;
	cout << "\n O volume do seu cubo \x82 de: " << Cubo(vx);
	break;
    case 2:
	cout << "\n Digite o tamanho dos lados do Ret\x83ngulo: ";
	cout << "\n Largura: "; cin >> vx;
	cout << "\n Altura: "; cin >> vy;
	cout << "\n Profundidade: "; cin >> vz;
	cout << "\n O volume do seu ret\x83ngulo \x82 de: " << Retangulo(vx, vy, vz);
	break;
    case 3:
	cout << "\n Digite o raio da esfera: ";
	cin >> vx;
	cout << "\n O volume da sua esfera \x82 de: " << Esfera(vx);
	break;
    case 4:
	cout << "\n Digite o raio do cilindro: ";
	cin >> vx;
	cout << "\n Digite a altura do cilindro: ";
	cin >> vy;
	cout << "\n O volume do seu cilindro \x82 de: " << Cilindro(vx, vy);
	break;
    case 5:
	sair = 1;
	break;
    default:
	break;
    }
    cout << "\n Pressione qualquer tecla para continuar.";
    getch();
    }
}