#include <iostream>
using namespace std;

int main() {
    char bebe;

    cout <<"\nIntroduce el sexo del bebe (M=Masculino, F=Femenino): ";
    cin >> bebe;
    cout << endl;

    if (bebe=='M' || bebe=='m') {
        cout <<"\nLa cuna tiene que ser de color azul.\n\n";
    } else if (bebe=='F' || bebe=='f') {
        cout <<"\nLa cuna tiene que ser de color rosa.\n\n";
    } else {
        cout <<"\nEl sexo del bebe es inválido.\n\n";
    }
}