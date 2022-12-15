#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char string[30]="Naruto", string2[30]=" Shippuden";
    strcat(string, string2);
    cout << "Strings Concatenadas: " << string << endl << endl;
    system("pause");
    return 0;
}
