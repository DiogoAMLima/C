#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    float M;
    setlocale(LC_ALL,"");
    printf("Digite o primeiro número: ");
    scanf("%f",&n1);
    printf("Digite o segundo número: ");
    scanf("%f",&n2);
    printf("Digite o terceiro número: ");
    scanf("%f",&n3);
    printf("Digite o quarto número: ");
    scanf("%f",&n4);
    printf("Digite o quinto número: ");
    scanf("%f",&n5);
    printf("Digite o sexto número: ");
    scanf("%f",&n6);
    printf("Digite o sétimo número: ");
    scanf("%f",&n7);
    printf("Digite o oitavo número: ");
    scanf("%f",&n8);
    printf("Digite o nono número: ");
    scanf("%f",&n9);
    printf("Digite o décimo número: ");
    scanf("%f",&n10);
    M=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
    printf("A média dos números digitados é: %.2f", M);
}
