#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float sal,novo_sal;
	setlocale(LC_ALL,"");
	printf("Informe o sal�rio do funcion�rio: ");
	scanf("%f",&sal);
	novo_sal=(sal*25/100)+sal;
	printf("\nO novo sal�rio com aumento �: %.f",novo_sal);
	return 0;
}
