#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
	int i,tam=30;
	char nome[tam];
	setlocale(LC_ALL,"");
	printf("Digite um nome com até 30 caracteres abaixo... \n\n");
	printf("Digite um nome: ");
	gets(nome);
	
	for(i=0;i<strlen(nome);i++)
	{
		printf("\nletra %d: \%c\n",i+1,nome[i]);
	}
	printf("\n\n");
	
	system("pause");
}
