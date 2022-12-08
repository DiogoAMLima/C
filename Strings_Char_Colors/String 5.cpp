#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main()
{
	char nome[30],sexo;
	int i;
	setlocale (LC_ALL, "");
	printf("Verifica se o sexo é feminino [f/F]...\n\n");
	printf("Digite um nome: ");
	gets(nome);
	printf("\nDigite o sexo da pessoa: ");
	scanf("%c",&sexo);
	printf("\nDigite a idade da pessoa: ");
	scanf("%d",&i);
	if(sexo=='f'|| sexo=='F' && i<25)
	printf("\nAceito\n\n",nome);
	else
	printf("\nNão aceito\n\n");
	system("pause");
}
