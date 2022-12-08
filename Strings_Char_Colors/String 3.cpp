#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   int y;
    char x[40];
    setlocale (LC_ALL, "");
    printf("Dê o valor da string x: ");
    scanf("%s",x);
    printf("O valor da string digitada é: %s", x);
}
