#include <stdio.h>
#include <locale.h>

int main(){
	int vetor[15],aux;
	
	setlocale(LC_ALL,"");
	for(int i=0; i < 15; i++) {
		printf("Digite o número %d do vetor: ",i);
		scanf("%d", &vetor[i]);
	}
	
	for(int x = 0; x < 15; x++){
		for(int y = x; y < 15; y++){
			if(vetor[x] > vetor[y]){
				aux = vetor [x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
	for(int i = 0; i < 15; i++){
		printf("\nNúmero %d é: %d \n", i, vetor[i]);
	}
}
