//Autor: Lawrence Rider Garcia
//Ejercicio Propuesto 1 de la Práctica 4, de Programación 1.
/*-Implementa un algoritmo que lea un conjunto de números reales hasta que se 
introduzca el valor cero y, a continuación, calcule y visualice la media y la varianza de los 
números introducidos.*/
#include <iostream>
using namespace std;

int main() {
    double numero,media,varianza,cantnum;

    media=0; //Asignación del valor inicial de las variables.
    varianza=0;
    cantnum=0;
    
    do { //Bucle para introducir y procesar los datos, que debe realizarse por lo menos una vez en el programa. El valor 0 lo finaliza.
		cout<<"\nIntroduzca un número-- Introduzca 0 para finalizar: ";
		cin >> numero;
		media=media+numero;
		varianza=varianza+(numero*numero);
		if (numero==0) { //Si el número es un 0, el programa finaliza sin modificar la cantidad de numeros.Así ni la media ni la varianza se ven afectadas.
			cantnum=cantnum;
		} else {
			cantnum=cantnum+1;
		}
    } while (numero!=0);
    
    if (cantnum==0 && numero==0) {  //Si el primer número introducido es un 0, finaliza sin mostrar en pantalla ningún dato.
      	cout<<"\n\nPrograma finalizado.\n\n";
    } else {                        //Si no lo es, realiza las operaciones y muestra el resultado.
		media=media/cantnum;
		varianza=(varianza/cantnum)-(media*media);
		cout<<"\n\nLa media es: "<< media <<"\nLa varianza es: "<< varianza <<endl<<endl;
    }
}