#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int x[6], i=0;
    setlocale(LC_ALL,"");
    cout << "Digite o valor do vetor na posição x[0]: ";
    cin >> x[0];
    cout << "Digite o valor do vetor na posição x[1]: ";
    cin >> x[1];
    cout << "Digite o valor do vetor na posição x[2]: ";
    cin >> x[2];
    cout << "Digite o valor do vetor na posição x[3]: ";
    cin >> x[3];
    cout << "Digite o valor do vetor na posição x[4]: ";
    cin >> x[4];
    cout << "Digite o valor do vetor na posição x[5]: ";
    cin >> x[5];
    for(i=0;i<6;i++){
	system("color 4");
	cout << "\nO valor da posição " << i << ' ' << "multiplicado por 2 é: " << x[i] * 2 << endl; 
    }
    system("pause");
}
