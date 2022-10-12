#include <stdio.h>
#include <conio.h>

float NT1;

void main(){
    printf("\nDigite o  valor de NT1: ");
    scanf("%f", &NT1);
    if (NT1<6.0) {
	printf("\nReprovado");
    } else {
	printf("\nAprovado");
    }

getch();
}
