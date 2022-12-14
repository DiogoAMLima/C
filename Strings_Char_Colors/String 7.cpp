#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    char string[30], string2[30];
    int i;
    cout << "Informe um nome para a primeira String: ";
    cin >> string;
    for (i=0; string[i] != '\0'; i++)
      string2[i]=string[i];
    string2[i]='\0';
    cout << endl;
    cout << "String 2" << ' ' << string2 << " copiada da String 1" << ' ' << string;
    return 0;
} 
