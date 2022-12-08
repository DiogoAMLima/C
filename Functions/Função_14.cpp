#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Troca(int c, int d){
    int na = 0, nb = 0;

    if(c > d){
        na = c;
        nb = d;
    printf("\nValores não trocados = {%d,%d}\n",na,nb);
    }else if(d > c){
        na = d;
        nb = c;
    printf("\nValores trocados com sucesso = {%d,%d}\n", na, nb);
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int c = 0, d = 0;

    printf("Digite um número: ");
    scanf("%d", &c);
    printf("Digite outro número: ");
    scanf("%d", &d);
    Troca(c, d);

    return 0;
}

