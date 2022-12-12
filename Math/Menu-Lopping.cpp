#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
   float num1, num2;
   char op, sair;
   setlocale(LC_ALL,"");
   do 
{
    printf("\nInforme o primeiro número: ");
	scanf("%f", &num1);
    printf("Informe o segundo número: ");
	scanf("%f", &num2);
    printf("Informe o operador (+, -, * ou /): ");
	scanf(" %c", &op);
    printf("\n%.2f %c %.2f = ", num1, op, num2);
    switch(op) 
{
    case '+':
    printf("%.2f\n", num1+num2);
    break;
    case '-':
    printf("%.2f\n\n", num1-num2);
    break;
    case '*':
    printf("%.2f\n\n", num1*num2);
    break;
    case '/':
    if (num2 == 0)
    printf("Erro - impossível dividir por zero.\n");
    else
    printf("%.2f\n\n", num1/num2);
    break;
    default:
    printf("Operador inválido\n");
}
    printf("\nDeseja sair? [S/N]: ");
	scanf(" %c", &sair);
}
    while (sair != 's' && sair != 'S');
}

