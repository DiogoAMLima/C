#include <stdio.h>
#include <locale.h>

int main(){
	
	float vHora,horas,sMin,salB,imp,salL;
	setlocale(LC_ALL,"");
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%f",&horas);
	printf("\nInforme o valor do sal�rio m�nimo: ");
	scanf("%f",&sMin);
	vHora=sMin*0.02;  // Valor da hora � igual ao sal�rio m�nimo * 0.02 (2%)
	salB=horas*vHora;
	imp=salB*0.03;  // Imposto � igual ao sal�rio bruto * 0.03 (3%)
	salL=salB-imp;  // Sal�rio l�quido � igual ao bruto - imposto
	printf("\nO sal�rio liquido �: %5.1f",salL);
	return 0;
}
