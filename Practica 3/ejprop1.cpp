#include <iostream>
using namespace std;

int main() {
    int num1,num2;

    cout <<"\nIntroduce el número 1: ";
    cin >> num1;
    cout <<"\nIntroduce el número 2: ";
    cin >> num2;
    cout << endl;
    
    if (num1<num2) {
        cout <<"\nEl número 2 es mayor que el número 1.\n\n";
    } else if (num1>num2) {
        cout <<"\nEl número 1 es mayor que el numero 2.\n\n";
    } else {
        cout <<"\nLos dos números son iguales.\n\n";
    }
}