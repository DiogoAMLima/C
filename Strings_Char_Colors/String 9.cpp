#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main () {
	char string[30], string2[30];
	cout << "Informe o valor da primeira string: ";
	cin >> string;
	cout << endl << endl;
	cout << "Informe o valor da segunda string: ";
	cin >> string2;
	strcat(string, " ");
	strcat(string, string2);
	system("color A");
	cout << endl << endl;
	cout << "Strings concatenadas: " << string << endl << endl;
	system("pause");
	return 0;
}
