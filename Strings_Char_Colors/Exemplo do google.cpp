#include <stdio.h>
#define fim '#'
int main() {
char c;
/* Le um conjunto de caracteres ate encontrar '#'
 O controle só volta ao programa após o enter.
 Portanto, só imprime após o enter */
c = getchar();
while (c != fim) {
 putchar(c);
 c = getchar();
}
}
