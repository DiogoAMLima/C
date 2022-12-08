#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float hip(float x,float y)
{
    float a,b,hipotenusa;
    a=x;
    b=y;
    hipotenusa=(a*a)+(b*b);
    return hipotenusa;
}
int main()
{
    float a,b,hipotenusa;
    setlocale(LC_ALL,"");
    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    printf("\nO valor da hipotenusa é: %.2f",hip(a,b));
}
