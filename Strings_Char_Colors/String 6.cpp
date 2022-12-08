#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
    char texto[100],inverso[100];
    int i,f;
    setlocale(LC_ALL,"");
    printf("Digite um texto: ");
    gets(texto);
    printf("\nO tamanho é : %zu ",strlen(texto)); // strlen = tamanho da string
    f=0;
    for(i=strlen(texto)-1;i>=0;i--){
    inverso[f]=texto[i];
    f++;	
    }
    inverso[f] = '\0';
    printf("\n\nO inverso é : %s \n",inverso);
	
    if(strcmp(texto,inverso)==0){ // strcmp = Comparação de strings. Se ambas forem iguais, um valor zero será retornado significando que é palíndromo
	printf("\nÉ palíndromo");
     }
     else{
	 printf("\nNão é palíndromo");
     }
	
      printf("\n\n");
      system("pause");
}
