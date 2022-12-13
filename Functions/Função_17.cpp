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
    cout << "Digite um número: ";
    cin >> numero;
    cout << "\nO número" << ' ' << numero << " dividido por 2 é: " << divide(numero) << endl << endl;
    system("pause");
}
