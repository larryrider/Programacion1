#include <iostream>
using namespace std;

int main() {
    double altura;

    cout <<"\nIntroduce tu altura: ";
    cin >> altura;
    cout << endl;
    
    if (altura<=0) {
		cout <<"\nAltura errónea.\n\n";
	} else if (altura<1.00) {
		cout <<"\nAtracciones para bebes. Pusera de color Blanco.\n\n";
	} else if (altura>=1.00 && altura<1.20) {
		cout <<"\nAtracciones infantiles. Pulsea de color Amarillo.\n\n";
	} else if (altura>=1.20 && altura<1.40) {
		cout <<"\nAtracciones junior. Pulsera de color Naranja.\n\n";
	} else {
		cout <<"\nAtracciones adulto. Pulsera de color Rojo.\n\n";
	}
}