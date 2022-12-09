#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int n1,n2,n3,n4,somaN;
    setlocale(LC_ALL,"");
    printf("————SOMA DE NÚMEROS NEGATIVOS————\n");
    printf("\nDigite um num: ");
    scanf("%d",&n1);
    printf("Digite um num: ");
    scanf("%d",&n2);
    printf("Digite um num: ");
    scanf("%d",&n3);
    printf("Digite um num: ");
    scanf("%d",&n4);
    if(n1>0){
    n1=0;
}
    if(n2>0){
    n2=0;
}
    if(n3>0){
    n3=0;
}
    if(n4>0){
    n4=0;	
}
    if((n1<0)||(n2<0)||(n3<0)||(n4<0)){
    somaN=n1+n2+n3+n4;
}
    printf("\nA soma dos números negativos é: %d",somaN);
    return 0;
}
