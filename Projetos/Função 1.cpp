#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblio.h"


int main()
{	
	int C;
	setlocale(LC_ALL,"");
	printf("Informe um numero inteiro n�o negativo: ");
	scanf("%d",&C);
	printf("\nO valor de %d no fatorial �: %d",C,fat(C));
}
