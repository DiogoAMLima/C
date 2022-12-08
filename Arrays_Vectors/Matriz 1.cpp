#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
int mat[3][3],matB[3][3],i,j;

    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    setlocale(LC_ALL,"");
    printf("Digite o valor: ");
    scanf("%i",&mat[i][j]);
    if((i==0 && j==0)||(i==0 && j==2)||(i==2 && j==0)||(i==2 && j==2))  (matB[i][j]=mat[i][j]*2);
    if((i==0 && j==1)||(i==1 && j==0)||(i==1 && j==2)||(i==2 && j==1))  (matB[i][j]=mat[i][j]*3);	
    if(i==1 && j==1)                                                    (matB[i][j]=0);
}
}
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    matB[1][1]+=mat[i][j];	
}
}
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%i",matB[i][j]);	
}   printf("\n");
}
getchar();
printf("\n\n");
system("pause");
return 0;
}


