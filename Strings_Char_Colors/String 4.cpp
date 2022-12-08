#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
{
    int x,y;
    char nome[30];
    printf("Informe quantas vezes deseja saber a quantidade de letras de uma string... ");
    scanf("%d",&y);
    for(x=1;x<=y;x++)
    {
	setlocale(LC_ALL,"");
	printf("\nDigite um nome: ");
	scanf("%zu",&nome);
	gets(nome);
	//na variável tam ficará guardado quantas letras tem um nome
	//tam=strlen(nome); Caso queira uma variável auxiliar para receber o tamanho
	printf("\nEsse nome possuí %d letras. \n", strlen(nome));
    }
    printf("\n");
    system("pause");
    return 0;
}

