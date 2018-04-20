#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    a = 1;
    b = 2;
    c = 3;
    d = 0;

    d = a;
    a = c;
    c = b;
    b = d;
    cout << "los valores son a: " << a << endl;
    cout << "los valores son b: " << b << endl;
    cout << "los valores son c: " << c << endl;
}