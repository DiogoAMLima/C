#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

float divide(float x) {
	float num, divide1;
	num = x;
	divide1 = num / 2;
	return divide1;
}

int main() {
	float numero;
	setlocale(LC_ALL,"");
	cout << "Digite um n�mero: ";
	cin >> numero;
	cout << "\nO n�mero" << ' ' << numero << " dividido por 2 �: " << divide(numero) << endl << endl;
	system("pause");
}
