#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int quadprft(int x)
{
	int num,quadradoprft;
	num=x;
	quadradoprft=num*num;
	return quadradoprft;
}
int main()
{
	int num;
	setlocale(LC_ALL,"");
	printf("Digite um n�mero inteiro n�o negativo: ");
	scanf("%d",&num);
	if((num>0) && (num%2==0))
	printf("\nN�mero inteiro e n�o negativo registrado...\n");
	else{
	printf("\nN�o � um n�mero inteiro ou � um n�mero negativo\n");
}
	printf("\nO quadrado perfeito do n�mero �: %d",quadprft(num));
}
