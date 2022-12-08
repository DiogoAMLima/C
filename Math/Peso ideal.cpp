#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	float H,pesoIdeal;
	char sexo;
	setlocale(LC_ALL,"");
	printf("Digite a altura em (cm): ");
	scanf("%f",&H);
	printf("\nQual o sexo [M/F]? ");
	scanf("%s",&sexo);
	if(sexo=='M'){
		(pesoIdeal=(72.7*H)-58);
    }
	else if(sexo=='F'){
		(pesoIdeal=(62.1*H)-44.7);	
	}
	printf("\nSeu peso ideal é: %.2f(cm)",pesoIdeal);
	return 0;
}
