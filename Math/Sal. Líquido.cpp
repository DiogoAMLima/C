#include <stdio.h>
#include <locale.h>

int main(){
	
	float vHora,horas,sMin,salB,imp,salL;
	setlocale(LC_ALL,"");
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%f",&horas);
	printf("\nInforme o valor do salário mínimo: ");
	scanf("%f",&sMin);
	vHora=sMin*0.02;  // Valor da hora é igual ao salário mínimo * 0.02 (2%)
	salB=horas*vHora;
	imp=salB*0.03;  // Imposto é igual ao salário bruto * 0.03 (3%)
	salL=salB-imp;  // Salário líquido é igual ao bruto - imposto
	printf("\nO salário liquido é: %5.1f",salL);
	return 0;
}
