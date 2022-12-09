#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int sal_bruto,sal_liquido,inss,irf;
	setlocale(LC_ALL,"");
	printf("Informe o salário bruto: ");
	scanf("%d",&sal_bruto);
	inss=sal_bruto*0.11;  // Valor do inss é igual a salário bruto * 0.11 (11%)
	irf=(sal_bruto-inss)*0.23;  // Imposto de renda é igual a (alário bruto - inss) * 0.23 (23%)
	sal_liquido=sal_bruto-inss-irf;  // Salário líquido é igual a salário bruto - inss - irf
	printf("\nO salário líquido é: %d",sal_liquido);  // %d = valor inteiro decimal (Se digitar 2000 como salário bruto, termos um resultado de 1371, quando na verdade o resultado seria 1370,6)
	return 0;
}
