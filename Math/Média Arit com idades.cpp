#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float id1,id2,id3,id4,media;
    setlocale(LC_ALL,"");
    printf("Informe a primeira idade: ");
    scanf("%f",&id1);
    printf("Informe a segunda idade: ");
    scanf("%f",&id2);
    printf("Informe a terceira idade: ");
    scanf("%f",&id3);
    printf("Informe a quarta idade: ");
    scanf("%f",&id4);
    media=(id1+id2+id3+id4)/4;
    printf("A média de idades entre %.1f e %.1f e %.1f e %.1f é: %.1f",id1, id2, id3, id4, media);
    return 0;
}
