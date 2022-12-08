#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fah(float x)
{
float F,C;
 C=x;
 F=(C*9/5)+32;	
 return F;	
}
int main()
{
 float C;
  setlocale(LC_ALL,"");
  printf("Digite o valor em celsius: ");
  scanf("%f",&C);
  printf("\nO valor em fahrenheit é: %.2f",fah(C));	
}
