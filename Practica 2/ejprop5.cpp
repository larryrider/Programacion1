#include <iostream>
using namespace std;

int main() {
    double n1, n2, multi, div;

    cout << "Introduce un número : " ;
    cin >> n1;
    cout << "Introduce otro número : ";
    cin >> n2;

    multi = n1 * n2;
    cout<< "El resultado de " << n1 << " * " << n2 << " es : " << multi << endl;
    div = n1 / n2;
    cout<< "El resultado de " << n1 << " / " << n2 << " es : " << div << endl;
}