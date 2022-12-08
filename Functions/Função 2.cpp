#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bibliopb.h"

int main()
{
    int C,D;
    setlocale(LC_ALL,"");
    printf("Informe o número e o seu expoente inteiros: ");
    scanf("%d%d",&C,&D);
    printf("O número %d elevado a %d é igual a: %d",C,D,pot(C,D));
}
