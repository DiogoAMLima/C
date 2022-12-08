#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
    int v[10];
	
    setlocale(LC_ALL,"");
    printf("Os elementos pares serão triplicados e os ímpares serão adicionados uma unidade...\n\n");
    for(int i=0;i<10;i++){
	printf("Digite um número inteiro: ");
	scanf("%d",&v[i]);
    }
    for(int i=0;i<10;i++){
	if(v[i] % 2==0){
	v[i]*=3;	
    }
        else{
	v[i]+=1;	
	}
    }
    for(int i=0;i<10;i++){
	system("color A");
	printf("\nVetor %d\n",v[i]);
    }
    printf("\n");
    system("pause");
}
