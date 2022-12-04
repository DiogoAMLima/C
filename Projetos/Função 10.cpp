#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pond(float x,float y,float z)
{
	float D,E,F,pond1;
	D=x;
	E=y;
	F=z;
	pond1=(D*5+E*3+F*2)/10;
	return pond1;
}
int main()
{	
	float D,E,F;
	setlocale(LC_ALL,"");
	printf("Digite a primeira nota: ");
	scanf("%f",&D);
	printf("\nDigite a segunda nota: ");
	scanf("%f",&E);
	printf("\nDigite a terceira nota: ");
	scanf("%f",&F);	
	printf("\nA média poderada é: %.2f",pond(D,E,F));
}

