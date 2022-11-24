#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float volcil(float x,float y)
{
    float R,H,PI,volumecilindro;
    PI=3.141592;
    R=x;
    H=y;
    volumecilindro=PI*R*R*H;
    return volumecilindro;
}
int main()
{
float R,H,volumecilindro;

    setlocale(LC_ALL,"");
    printf("Digite o valor do raio: ");
    scanf("%f",&R);
    printf("\nDigite a altura: ");
    scanf("%f",&H);
    printf("\nO volume do cilindro é: %.2f",volcil(R,H));
}
