#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	float M;
	setlocale(LC_ALL,"");
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%f",&n2);
	printf("Digite o terceiro n�mero: ");
	scanf("%f",&n3);
	printf("Digite o quarto n�mero: ");
	scanf("%f",&n4);
	printf("Digite o quinto n�mero: ");
	scanf("%f",&n5);
	printf("Digite o sexto n�mero: ");
	scanf("%f",&n6);
	printf("Digite o s�timo n�mero: ");
	scanf("%f",&n7);
	printf("Digite o oitavo n�mero: ");
	scanf("%f",&n8);
	printf("Digite o nono n�mero: ");
	scanf("%f",&n9);
	printf("Digite o d�cimo n�mero: ");
	scanf("%f",&n10);
	M=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
	printf("A m�dia dos n�meros digitados �: %.2f", M);
}
