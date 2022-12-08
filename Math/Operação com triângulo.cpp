#include<stdio.h>
#include<stdlib.h>

int main (){
    float x,y,z;
    printf("Informe o valor de x: ");
    scanf("%f",&x);
    printf("Informe o valor de y: ");
    scanf("%f",&y);
    printf("Informe o valor de z: ");
    scanf("%f",&z);
    if (x>y||z<=30){
	printf("\n\tSe %.1f > %.1f || %.1f < 30: Multiplique %.1f por 2 = %.1f", x, y, z, x, x*2);   
    }
    else{
         printf("\n\tSe %.1f > %.1f || %.1f < 30: Divida %.1f por 2 = %.1f \n\tDivida %.1f por 5 = %.1f",x, y, z, x, x/2, z, z/5); // \t é para dar um TAB na string
    }
    return 0;
}
