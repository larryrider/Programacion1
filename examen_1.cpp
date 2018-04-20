//Examen realizado por: Lawrence Arthur Rider Garcia

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int genNum();
int pideNum();
bool esPar(int &num);
void juego(int &ordenador, int &usuario, int &partidauser, int &partidapc, int &partidastotal);

main() {
	int usuario, ordenador, partidapc, partidauser, partidastotal;
	char eleccion;
	bool otra;

	srand((unsigned)time(0));

	partidapc = 0;
	partidauser = 0;
	partidastotal = 0;

	do {
		usuario = pideNum(); //Llamada a los modulos, tiene que realizarse por lo menos 1 vez en la ejecucion.
		ordenador = genNum();
		juego(ordenador, usuario, partidauser, partidapc, partidastotal); //Procedimiento que se encarga de comprobar quien gana, de contabilizar las partidas jugadas y sus resultados.

		do {
			cout << "\n¿Quieres jugar otra vez? (s/n): "; //Validacion de la eleccion de seguir jugando.
			cin >> eleccion;
			if (eleccion != 's' && eleccion != 'S' && eleccion != 'n' && eleccion != 'N') {
				cout << "\nIntroduzca un valor correcto. (s= si, n=no). \n";
			}
		} while (eleccion != 's' && eleccion != 'S' && eleccion != 'n' && eleccion != 'N');

		if (eleccion == 's' || eleccion == 'S') {
			otra = true;
		} else {
			otra = false;
		}
	} while (otra == true); //Cuando el usuario decida dejar de jugar, es decir, eleccion sea no, se dejará de ejecutar este bucle.

	cout << "\n-----------------\n"; //Conjunto de resultados que se deben mostrar una vez terminado el juego.
	cout << "Total de partidas jugadas: " << partidastotal;
	cout << "\nTotal de partidas ganadas por el usuario: " << partidauser;
	cout << "\nTotal de partidas ganadas por el ordenador: " << partidapc;
	cout << "\n-----------------\n";
}

int genNum() { //Modulo encargado de generar un valor aleatorio.
	int aleatorio;

	aleatorio = rand() % 6;
	cout << "El ordenador ha elegido: " << aleatorio << endl;

	return (aleatorio);
}

int pideNum() { //Modulo encargado de pedir un numero al usuario, y de la validacion del mismo.
	int num;

	do {
		cout << "\nIntroduzca un numero entre 0 y 5: ";
		cin >> num;
		cout << endl;
		if (num < 0 || num > 5) {
			cout << "\nIntroduzca un valor correcto\n";
		}
	} while (num < 0 || num > 5);

	cout << "El usuario ha elegido: " << num << endl;

	return (num);
}

bool esPar(int &num) {
	if (num % 2 == 0) { //Si el valor pasado por referencia es par, la funcion devuelve 1, si no, devuelve 0.
		return (true);
	} else {
		return (false);
	}
}

void juego(int &ordenador, int &usuario, int &partidauser, int &partidapc, int &partidastotal) {
	int suma;

	suma = usuario + ordenador;

	if ((esPar(ordenador) == 1 && esPar(usuario) == 1) || (esPar(ordenador) == 0 && esPar(usuario) == 0)) { //Estos "if else" anidados comprueba quien gana, llamando al modulo esPar.
		cout << "\nEmpate.\n";
	} else if (esPar(suma) == 1 && esPar(usuario) == 1) {
		cout << "\nGana el usuario\n";
		partidauser++;
	} else if (esPar(suma) == 1 && esPar(usuario) == 0) {
		cout << "\nGana la máquina.\n";
		partidapc++;
	} else if (esPar(suma) == 0 && esPar(usuario) == 0) {
		cout << "\nGana el usuario\n";
		partidauser++;
	} else {
		cout << "\nGana la máquina.\n";
		partidapc++;
	}
	partidastotal++;
}
