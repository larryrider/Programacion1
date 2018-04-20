#include <iostream>
using namespace std;

int main() {
    int cant, edad, dinero;

    cout << endl << "1º- ¡Anota tu edad! Pero no la enseñes.. " << endl;
    cin.get();
    cout << "2º- Ahora multiplícala por 2 " << endl;
    cin.get();
    cout << "3º- A continuación, súmale 5" << endl;
    cin.get();
    cout << "4º- Multiplica por 500 esa cantidad" << endl;
    cin.get();
    cout << "5º- Ahora súmalo con la cantidad de euros (¡No los céntimos!) que tengas en el bolsillo" << endl;
    cin.get();
    cout << "6º- Por último, tan solo resta al resultado la cantidad de 3758" << endl;
    cin.get();
    cout << "Introduzca la cantidad total: ";
    cin >> cant;

    cant = cant + 1258;
    edad = cant/1000;
    dinero = cant % 1000;

    cout << endl << "Tu edad es: " << edad << " años." << endl;
    cout << "El dinero que llevas es: " << dinero << " euros." << endl;
    cout << endl;
}