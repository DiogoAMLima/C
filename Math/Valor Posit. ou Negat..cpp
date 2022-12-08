#include <stdio.h>
#include <locale.h>

    main( )
{
    setlocale(LC_ALL,"");
    int x;
    printf("Informe um valor para x: ");
    scanf("%i",&x);
    if (x>0)
{
    printf("O valor é positivo\n");
}
    else{  
        printf("O valor é negativo\n");
}
}
