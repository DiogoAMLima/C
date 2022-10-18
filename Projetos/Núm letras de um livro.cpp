#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float npl,nlp,num_letras_livro;
	setlocale(LC_ALL,"");
	printf("Informe o número de páginas do livro: ");
	scanf("%f",&npl);
	printf("\nInforme o número de letras por página: ");
	scanf("%f",&nlp);
	num_letras_livro=(npl*nlp);
	printf("\nNúmero de letras no livro é: %.f",num_letras_livro);
	return 0;
}
