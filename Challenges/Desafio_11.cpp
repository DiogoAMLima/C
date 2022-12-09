#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *file;
	file = fopen("Programa.txt", "w");
	
	if(file == NULL)
	{
		printf("Erro na leitura do arquivo \n");
		return 1;
	}
	char frase[30];
	int i;
	int tamanho;

	fprintf (file,"OlaMundo");
	 
	fclose(file);
	
	file = fopen("Programa.txt", "r");
	
	if(file == NULL)
	{
		printf("Erro na leitura do arquivo \n");
		return 2;
	}
	
	fgets (frase,30,file);
	
	tamanho = strlen(frase);
	
	printf("\nTotal de caracteres presente: %d",tamanho);
	printf("\n\n");

   	fclose(file);
	system("pause");
	return 0;
}

