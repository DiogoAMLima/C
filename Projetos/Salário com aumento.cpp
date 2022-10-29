#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	float salario;
	setlocale(LC_ALL,"");
	printf("Informe um salário: ");
	scanf("%f",&salario);
	// colocar %% para que o símbolo de porcentagem apareça no output
	if (salario<=600)
	   printf("Salário com aumento de 30%%: %2.f",salario+(salario*0.30));  // Aumento de 30% 
	else
	if ((salario>600)&&(salario<=1100))
	   printf("Salário com aumento de 25%%: %2.f",salario+(salario*0.25));  // Aumento de 25%
	else
	if ((salario>1100)&&(salario<=2400))
	   printf("Salário com aumento de 20%%: %2.f",salario+(salario*0.20));  // Aumento de 20%
	else
	if ((salario>2400)&&(salario<=3550))
	   printf("Salário com aumento de 15%%: %2.f",salario+(salario*0.15));  // Aumento de 15%
	else
	if(salario>3550)
	   printf("Salário com aumento de 10%%: %2.f",salario+(salario*0.10));  // Aumento de 10%
	return 0;          
} 
