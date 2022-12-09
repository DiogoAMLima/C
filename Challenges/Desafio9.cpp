#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int somaCubos(int x,int y,int z)
{
    int a=0, b=0, c=0, soma=0;
    a=x;
    b=y;
    c=z;
    if((a<0)||(b<0)||(c<0))
    return 0;
    else
    return soma += (a*a*a)+(b*b*b)+(c*c*c);
}

int main()
{
    int a,b,c,soma;
    setlocale(LC_ALL,"");
    printf("Digite um valor maio que 0: ");
    scanf("%d",&a);
    printf("\nDigite outro valor maior que 0: ");
    scanf("%d",&b);
    printf("\nDigite mais um valor maior que 0: ");
    scanf("%d",&c);	
    printf("\nO valor %d ao cubo + %d ao cubo + %d ao cubo tem como resultado: %d ",a, b, c, somaCubos(a,b,c));
}
