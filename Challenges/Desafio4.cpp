#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int x,soma=0;
	setlocale(LC_ALL,"");
	printf("Digito de valores até a soma ser 5000 ou superior...\n");
	do{
	printf("\nDigite um valor: ");
	scanf("%d",&x);
  	soma=soma+x;
}  	while(soma<5000);
	printf("\nO resultado final é: %d",soma);
	return 0;
} 
