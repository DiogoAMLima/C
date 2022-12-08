#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
    int x[20],b,i;
    float nota=0;
    setlocale(LC_ALL,"");
    for(i=0;i<=19;i++){
    printf("\nQuestão %d: entre com a resposta: ",i);
    scanf("%d",&x[i]);
    if(x[i] == 3)
    b++;
    else if(x[i] == 2)
    nota += 0.5;
    else if(x[i] == 1)
    nota += 1;
}
    if(nota>=7){
    printf("\nAprovado!!!");	
}
    else{
    printf("\nReprovado!!!");	 
}
    printf("\n\nA nota foi %.2f e a prova teve a resposta 3 marcada %d vezes",nota,b);
}
