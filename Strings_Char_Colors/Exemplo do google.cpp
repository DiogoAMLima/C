#include <stdio.h>
#define fim '#'
int main() {
char c;
/* Le um conjunto de caracteres ate encontrar '#'
 O controle s� volta ao programa ap�s o enter.
 Portanto, s� imprime ap�s o enter */
c = getchar();
while (c != fim) {
 putchar(c);
 c = getchar();
}
}
