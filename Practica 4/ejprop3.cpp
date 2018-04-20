//Autor: Lawrence Arthur Rider Garcia
//Ejercicio Propuesto 3 de la Práctica 4, de Programación 1.
/*-Implementa un programa que represente gráficamente un polinomio de tercer 
grado f(x) = ax3+bx2+cx+d, de forma invertida (es decir, los valores de x en el eje vertical y los 
de f(x) en el horizontal). Para ello el programa solicitará en primer lugar el número de valores 
que se quieren representar (empezando en 0) y el valor de cada uno de los cuatro coeficientes 
del polinomio, que serán enteros. El programa debe controlar que el número de valores y los 
coeficientes sean todos mayores o iguales que 0. */
#include <iostream>
using namespace std;

int main() {
    int valores,a,b,c,d,fila,j,funcion;
    
    do{
		cout<<"\nIntroduce el número de valores: ";
		cin>>valores;
      	if (valores<0) {
			cout<<"\nError, cantidad negativa.\n";
		}
    }while(valores<0);
    
    do{
		cout<<"\nIntroduce el coeficiente a: ";
		cin>>a;
		if (a<0) {
			cout<<"\nError, coeficiente negativo.\n";
		}
    }while(a<0);
    
    do{
		cout<<"\nIntroduce el coeficiente b: ";
		cin>>b;
		if (b<0) {
			cout<<"\nError, coeficiente negativo.\n";
		}
    }while(b<0);
    
    do{
		cout<<"\nIntroduce el coeficiente c: ";
		cin>>c;
		if (c<0) {
			cout<<"\nError, coeficiente negativo.\n";
		}
    }while(c<0);
    
    do{	
		cout<<"\nIntroduce el coeficiente d: ";
		cin>>d;
		if (d<0) {
			cout<<"\nError, coeficiente negativo.\n";
		}
    }while(d<0);
    
    cout<<endl;
      
    for (fila=0; fila<valores; fila++){ //Este bucle se repite tantas veces como numero de valores se hayan introducido y va incrementando el valor de las filas en una unidad.
		cout << fila <<"  |";
		funcion=(a*fila*fila*fila)+(b*fila*fila)+(c*fila)+d;
		for (j=1; j<funcion; j++){  //Este bucle pondrá tantos espacios como valga la función total en el valor de la fila (pero se reserva un último "espacio" para representar el " * ").
			cout<<" ";
		}
		cout<<"*"<<endl; 
	}
}
