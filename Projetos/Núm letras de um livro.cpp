#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float npl,nlp,num_letras_livro;
	setlocale(LC_ALL,"");
	printf("Informe o n�mero de p�ginas do livro: ");
	scanf("%f",&npl);
	printf("\nInforme o n�mero de letras por p�gina: ");
	scanf("%f",&nlp);
	num_letras_livro=(npl*nlp);
	printf("\nN�mero de letras no livro �: %.f",num_letras_livro);
	return 0;
}
