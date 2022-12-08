#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calcFAH(float f){
    float c;
    c=(f-32)/1.8;
    return c;
}
int main(){
float fah,cel;
setlocale(LC_ALL,"");
printf("Digite os graus em fah: ");
scanf("%f",&fah);
cel=calcFAH(fah);
printf("\nO resultado da conversão é: %.2f",cel);
}
