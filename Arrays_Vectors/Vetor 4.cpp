#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int x[10], i=0;
    setlocale(LC_ALL,"");
    printf("Digite o valor do vetor na posição x[0]: ");
    scanf("%d",&x[0]);
    printf("\nDigite o valor do vetor na posição x[1]: ");
    scanf("%d",&x[1]);
    printf("\nDigite o valor do vetor na posição x[2]: ");
    scanf("%d",&x[2]);
    printf("\nDigite o valor do vetor na posição x[3]: ");
    scanf("%d",&x[3]);
    printf("\nDigite o valor do vetor na posição x[4]: ");
    scanf("%d",&x[4]);
    printf("\nDigite o valor do vetor na posição x[5]: ");
    scanf("%d",&x[5]);
    printf("\nDigite o valor do vetor na posição x[6]: ");
    scanf("%d",&x[6]);
    printf("\nDigite o valor do vetor na posição x[7]: ");
    scanf("%d",&x[7]);
    printf("\nDigite o valor do vetor na posição x[8]: ");
    scanf("%d",&x[8]);
    printf("\nDigite o valor do vetor na posição x[9]: ");
    scanf("%d",&x[9]);
    for(i=0;i<10;i++)
    {
    system("color 4");
    printf("\nO valor da posição %d é: %d",i,x[i]);	
    }
}
