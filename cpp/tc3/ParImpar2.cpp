//ParImpar.cpp
 #include <stdio.h>
 #include <conio.h>

void main(){

    int N, Resto;

    clrscr();
    printf("\n Digite um N int: ");
    scanf("%i", &N);
    Resto=N%2;
    if(Resto==0){
        printf("\n N = Par");
    } else{
        printf("\n N Impar");
    }

    getch();
}