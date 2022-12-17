#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;

int fat(int N)
{
	if (N < 2)
	return 1;
	else
    return N*fat(N-1);
}

int main()
{
	int N;
	setlocale(LC_ALL,"");
	cout << "Digite um num: ";
	cin >> N;
	cout << "\nO resultado é: " << fat(N);
}
