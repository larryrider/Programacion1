//Autor: Lawrence Arthur Rider Garcia
//Ejercicio Propuesto 4 de la Práctica 4, de Programación 1.
/*-Implementa un programa que calcule el número pi con una precisión de n
decimales, siendo n un valor introducido por teclado.*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, fila,i;
    
    fila=0;
    i=0;
    
    cin>>n;
    
    for (fila = 1; fila <=n; fila++){
		for (i=n;n<fila ;i--) {
			cout <<"*";
		}
	cout<<endl;
}
    
    
    
    
    
    
    
    
}
