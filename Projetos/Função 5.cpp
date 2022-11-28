#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float volesf(float x)
{
    float PI,V,R,volumeesf;
    PI=3;
    R=x;
    V=(PI*4/3)*R*R*R;
    volumeesf=V;
	
    return volumeesf;
}

int main()
{
    float R,volumeesf;
    setlocale(LC_ALL,"");
    printf("Digite o valor do raio: ");
    scanf("%f",&R);
    printf("\nO volume da esfera é: %.2f",volesf(R));
}
