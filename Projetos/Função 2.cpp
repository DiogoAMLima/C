#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bibliopb.h"

int main()
{
	int C,D;
	setlocale(LC_ALL,"");
	printf("Informe o n�mero e o seu expoente inteiros: ");
	scanf("%d%d",&C,&D);
	printf("O n�mero %d elevado a %d � igual a: %d",C,D,pot(C,D));
}
