#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int i;
	setlocale(LC_ALL,"");
	for(i=1;i<=100;i++){
		if(i%5==0){
			printf("%d � m�ltiplo de 5\n",i);
		}
	}
	return 0;
}
