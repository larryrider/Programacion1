//Autor: Lawrence Arthur Rider Garcia
//Ejercicio Propuesto 5 de la Práctica 4, de Programación 1.
/*-Implementa un programa que visualice en pantalla cada una de las siguientes
figuras, preguntando al usuario el número de filas n que deben tener las figuras (En el ejemplo
mostrado, n = 6). Ten en cuenta que la solución que propongas debe contener sentencias de
salida por pantalla en las que se impriman exclusivamente uno solo de los siguientes caracteres:
blanco ‘ ‘, asterisco ‘*’ y letra ‘o’.*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, fila,i, j,col;
    
    fila=0;
    i=0;
    
    cout<<"introduce un numero: ";
    cin>>n;
    cout<<endl;
    
    for (fila = 1; fila <=n; fila++) {
		for (i=n;i>=fila;i--) {
			if (fila==1 || fila==n || fila==(n-1)) {
				cout <<"*";
			} else if (i==n || i==fila) {
				cout<<"*";
			} else {
				cout<<"o";
			}
		}
		cout<<endl;
    }   
    cout<<endl<<endl;
    
    for (fila=1; fila<=n; fila++){
		if (fila==1 || fila==n){
			cout<<"o";
		} else {
			cout<<"*";
		}
    }
    cout<<endl;
    
    for(fila=2; fila<=n; fila++){
		for(col=1; col<fila; col++){
			cout << ' ';
		}
      	for (i=n; i>=fila; i--){
			if (i==col && i==n) {
	 			cout<<"o";
			} else {
				cout<<"*";
			}
      	}
      	cout << endl;
    }

    cout<<endl<<endl;  
}