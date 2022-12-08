#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float vCompra;
    setlocale(LC_ALL,"");
    printf("Informe o valor de compra: ");
    scanf("%f",&vCompra);
    if (vCompra>=5000){
    	printf("\nDesconto de 20%%: %.2f - %.2f = %.2f",vCompra, vCompra*0.20, vCompra-(vCompra*0.2));	
     }
    else{
    if(vCompra<5000)
	printf("\nDesconto de 15%%: %.2f - %.2f = %.2f",vCompra, vCompra*0.15, vCompra-(vCompra*0.15));	
    }
    return 0;	
}
