#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dobra(int x)
{
	int num,dobra1;
	num=x;
	dobra1 = num*2;
	return dobra1;
}
int main(){
	int numero;
	setlocale(LC_ALL,"");
	printf("Digite um número inteiro: ");
	scanf("%d",&numero);
	printf("O dobro do número é: %d",dobra(numero));
}
