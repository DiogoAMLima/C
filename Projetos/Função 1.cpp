#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblio.h"

int main()
{	
    int C;
    setlocale(LC_ALL,"");
    printf("Informe um numero inteiro não negativo: ");
    scanf("%d",&C);
    printf("\nO valor de %d no fatorial é: %d",C,fat(C));
}
