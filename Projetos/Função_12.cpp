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
    printf("Digite um número inteiro não negativo: ");
    scanf("%d",&num);
    if((num>0) && (num%2==0))
    printf("\nNúmero inteiro e não negativo registrado...\n");
    else{
    printf("\nNão é um número inteiro ou é um número negativo\n");
}
    printf("\nO quadrado perfeito do número é: %d",quadprft(num));
}
