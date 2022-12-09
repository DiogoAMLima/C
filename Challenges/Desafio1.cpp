#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int n1,n2,n3,n4,SQ;
    setlocale(LC_ALL,"");
    printf("Digite um num: ");
    scanf("%d",&n1);
    printf("\nDigite um num: ");
    scanf("%d",&n2);
    printf("\nDigite um num: ");
    scanf("%d",&n3);
    printf("\nDigite um num: ");
    scanf("%d",&n4);
    SQ=(n1*n1)+(n2*n2)+(n3*n3)+(n4*n4);
    if((n3*n3)>=1000){
        printf("\n%.5d \n",(n3*n3));
    }
    printf("\nNúmeros digitados ao quadrado, depois somados, resultam em: %d",SQ);
    return 0;
    system ("pause");
}

