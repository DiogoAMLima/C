#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float a,b,x,y,soma,sub;
	setlocale(LC_ALL,"");
	printf("Informe um valor: ");
	scanf("%f",&a);
	printf("Informe outro valor: ");
	scanf("%f",&b);
	soma = a + b;
	printf("A soma de %.2f + %.2f é: %.2f", a, b, soma);
	printf("\n\nInforme mais um valor: ");
	scanf("%f",&x);
	printf("Informe o último valor: ");
	scanf("%f",&y);
	sub = x - y;
	printf("A subtração de %.2f - %.2f é: %.2f", x, y, sub);
}
