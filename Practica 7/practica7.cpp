//Práctica 7 realizada por: Lawrence Arthur Rider García

/*
Implementa un programa en C que recoja los parámetros desde la línea de
comandos del Shell y devuelva un resultado numérico de CERO cuando no hay parámetros
repetidos, o en caso de existir repetidos, indicar cuántos lo están.
*/

#include <iostream>
#include <cstring>
using namespace std;

int buscar(int elementoBase, int indiceHasta,char *lista[]);

int main(int argc, char *argv[]){
    int contador;
    int nuevaposicion;
    int cantidadrepetidos;
    int vectorrepetidos[argc];
    int j;
    int k;
    int max;
    bool salir;

    cantidadrepetidos=0;
    j=0;
    cout<<endl;

    for (contador=1; contador < argc; contador++) {
		nuevaposicion=buscar(contador,argc,argv);
		if (nuevaposicion>0) {
			vectorrepetidos[j]=nuevaposicion; //Para almacenar en un array las posiciones de los elementos repetidos.
			j++;
			cantidadrepetidos++;
		}
    }
    
    max=cantidadrepetidos;

    cantidadrepetidos=0;
    salir=false;
    
    for (k=0;k<max;k++) {  //En este bucle, se accede a los elementos repetidos mediante el array de sus posiciones. La cantidad de repetidos (al final) es la suma de todos los elementos, menos los elementos repetidos.
		cantidadrepetidos++;  
		salir=false;
		for (j=k+1; j<max && salir==false; j++){
			if ((strcmp(argv[vectorrepetidos[k]],argv[vectorrepetidos[j]])==0)){
				cantidadrepetidos--;
				salir=true;
			}
		}
    }
    cout<<"\n\nLos elementos repetidos son: "<<cantidadrepetidos<<endl<<endl;
}

// Función para buscar elementos repetidos
/* Tomando el elemento "desde", busca en la lista hasta la posición "hasta"
Devuelve 0 si no encuentra un repetido. Si encuentra alguno, devuelve la posición del elemento encontrado */

int buscar(int desde, int hasta, char *lista[]){
    int i;
    int encontrado; // se utiliza como indicador para salir

    encontrado=0;

    for (i=desde+1; i<hasta && encontrado==0 ; i++) {
		cout << "Comparando: " << lista[desde] <<" con: " <<lista[i] <<endl;
		if (strcmp(lista[desde],lista[i])==0) {
			encontrado=i;
		}
    }   
    return encontrado;
}