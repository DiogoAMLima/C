#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
    int s,n1, n2, n3, n4;
    printf("Informe um n�mero inteiro: ");
    scanf("%d", &n1);
    printf("\nInforme outro n�mero inteiro: ");
    scanf("%d", &n2);
    printf("\nInforme mais um n�mero inteiro: ");
    scanf("%d", &n3);
    printf("\nInforme o �ltimo n�mero inteiro: ");
    scanf("%d", &n4);
    s=n1+n2+n3+n4;
    printf("A soma de %d + %d + %d + %d �: %d", n1,n2,n3,n4,s);
    return 0;
}
