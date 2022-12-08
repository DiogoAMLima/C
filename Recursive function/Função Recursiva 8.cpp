#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void print(int N);

main()
{
	print(5);
}
void print (int N)
{
	if(N>=1){
		printf(" %d",N);
		print(N-1);
	}
}
