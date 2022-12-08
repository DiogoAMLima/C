#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
    int s,n1, n2, n3, n4;
    printf("Informe um número inteiro: ");
    scanf("%d", &n1);
    printf("\nInforme outro número inteiro: ");
    scanf("%d", &n2);
    printf("\nInforme mais um número inteiro: ");
    scanf("%d", &n3);
    printf("\nInforme o último número inteiro: ");
    scanf("%d", &n4);
    s=n1+n2+n3+n4;
    printf("A soma de %d + %d + %d + %d é: %d", n1,n2,n3,n4,s);
    return 0;
}
