#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float alt,base,area;
    printf("Informe a altura: ");
    scanf("%f",&alt);
    printf("Informe a base: ");
    scanf("%f",&base);
    area=base*alt/2;
    printf("A área do triângulo é igual a: %.1f",area);
    return 0;
}
