#include <stdio.h>
#include <locale.h>

int main(){
	
    float valor,tx, rend, vTotal;
    setlocale(LC_ALL,"");
    printf("Informe o valor do depósito: ");
    scanf("%f",&valor);
    printf("Informe o valor da taxa de juros (%%): ");
    scanf("%f",&tx);
    rend=valor*tx/100;
    vTotal=valor+rend;
    printf("O rendimento é: %5.1f",rend);
    printf("\nO valor final é: %5.1f",vTotal);
    return 0;
}
