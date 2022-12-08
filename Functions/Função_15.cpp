#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char codigo(char tecla)
{
    char ascii;
    ascii = tecla;
    return ascii;
}

int main() {
    char ch;
    setlocale(LC_ALL,"");
    system("color B");
    printf("Aperte uma tecla (será considerada a primeira tecla pressionada): ");
    ch = getchar();
    printf("\nO código ASCII da tecla pressionada é: %d\n",codigo(ch));
}
