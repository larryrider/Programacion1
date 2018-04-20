#include <iostream>
using namespace std;

int main() {
    int num;

    cout <<"\nIntroduce el número: ";
    cin >> num;
    cout << endl;
    
    if (num%2==0) {
        cout <<"\nEl número es par.\n\n";
    } else {
        cout <<"\nEl número es impar.\n\n";
    }
}