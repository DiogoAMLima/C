#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int num(int k,int n)
{
    int K,N;
    K=k;
    N=n;
    if(n == 1)
    return k;
    else
    return K*num(K,N-1);
}


int main()
{
    int K,N;
    setlocale(LC_ALL,"");
    printf("Digite o valor de k: ");
    scanf("%d",&K);
    printf("\nDigite o valor de n: ");
    scanf("%d",&N);	
    printf("\nO resultado é: %d ",num(K,N));
}
