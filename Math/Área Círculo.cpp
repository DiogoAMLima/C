#include <stdio.h>
#include <locale.h>

const float pi=3.141592;
int main(){
  setlocale(LC_ALL,"");
  float raio, area, perimetro;
  printf("A constante PI est� sendo considerada como: 3.141592");
  printf("\n\nDigite o raio: ");
  scanf("%f",&raio);
  area = pi * (raio*raio);
  perimetro=2.0 * pi * raio;
  printf("\nO Raio �: %.1f",raio);
  printf("\n\nA �rea: %.1f\n",area);
  printf("\nO Per�metro �: %.1f\n",perimetro);
  return 0;
}
