#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	char x[30];
	setlocale(LC_ALL, "");
	printf("Dê o valor da string x: ");
	scanf("%s",x);
    printf("o valor de x é: %s",x);
}
