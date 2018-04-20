//Autor: Lawrence Rider Garcia
//Ejercicio Propuesto 2 de la Práctica 4, de Programación 1.
/*-Implementa un programa que lea un número natural desde teclado. A 
continuación el programa debe calcular el siguiente número primo, mayor que el introducido, y 
mostrarlo por pantalla.*/
#include <iostream>
using namespace std;

int main() {
    int numero,numero2;
    bool salir,primo;

    salir=false;
    primo=true;
    
    cout<<"\nIntroduce el número: ";
    cin>>numero;
    
    if (numero<0) {
		cout<<"\nEl número introducido no es natural.\n";
    } else {
		while (salir==false){ /*De este primer bucle no saldrá hasta que primo sea true, en caso contrario va incrementando el valor del numero introducido*/
			numero2=numero; 
			numero=numero+1;
			primo=true;
			while ((primo==true) && (numero2>1)) { /*Saldrá de este bucle cuando primo sea false porque se ha encontrado un valor de en medio que %= 0, y volvera a hacer calculos con el bucle primero, o saldrá cuando primo se mantenga en true, pero sea igual o menor que 1*/
				if ((numero%numero2)==0) {
					primo=false; //Si no se cumple el %, se va reduciendo el numero2.. Hasta encontrar un %=0, o no encontrarlo y que numero2 valga 1, y primo en valor true, y salir de los dos bucles.
				} else {
					(numero2=numero2-1);
				}
			}
			if (primo==true) {
				salir=true;
			}
		}
		cout<<"\nEl número primo siquiente es: "<< numero <<endl<<endl;
	}
}
