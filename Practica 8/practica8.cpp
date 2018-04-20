//Practica 8 realizada por: Lawrence Arthur Rider García .

#include <iostream>
#include <string.h>

using namespace std;

const int KTAM=30; //Tamaño máximo para un nombre.
const int MAXAM=50;  //Tamaño máximo para los amigos almacenados.

typedef struct {
	int mes, anyo;
} TFecha;

typedef char TNombre [KTAM];

typedef struct {
	TNombre animal;
	TNombre elemento;
} TSigno;

typedef struct {
	TNombre nombre;
	TFecha fecha;
	TSigno signo;
} TDatos;

typedef TDatos THoroscopo[MAXAM];


int menu();  //Declaracion de modulos.
void introducedatos(THoroscopo vector, int &contador);
void listado(int &contador,THoroscopo vector);


main(){
	int contador;
	int opcionmenu;
	bool salir;
	
	THoroscopo vector;
	
	salir=false;
	contador=0;
	
	while (salir==false){    
		opcionmenu=menu();
		switch (opcionmenu){
			case 1:
				introducedatos (vector,contador);
				contador++;
				break;
			case 2:
				listado(contador,vector);
				break;
			case 3:
				salir=true;
				break;
		}
	}
}
    

int menu(){
	int opcion;
	
	do {
		cout<<"\n1. Introduce datos\n2. Listado\n3. Salir\nOpción: ";
		cin>>opcion;
		if (opcion<1 || opcion>3) cout<<"\nOPCION INCORRECTA\n";
	} while (opcion<1 || opcion>3);
	
	return opcion;
}

void introducedatos(THoroscopo vector, int &contador){
	int sig,suma,suma2,elem;
	
	cout<<"\nIntroduzca el nombre: ";
	cin>>vector[contador].nombre;
	do {
		cout<<"Introduzca el mes de nacimiento (1-12): ";
		cin>>vector[contador].fecha.mes;
		if (vector[contador].fecha.mes<1 || vector[contador].fecha.mes>12) {
			cout<<"\n\nIntroduzca un mes correcto.\n\n";
		} 
	} while(vector[contador].fecha.mes<1 || vector[contador].fecha.mes>12);
	do {
		cout<<"Introduzca el año de nacimiento (mayor que 0): ";
		cin>>vector[contador].fecha.anyo;
		if (vector[contador].fecha.anyo<0) {
			cout<<"\n\nIntroduzca un año positivo.\n\n";
		}
	} while(vector[contador].fecha.anyo<0 );
	
	sig=vector[contador].fecha.mes;
	sig=sig%3;
	switch(sig){
		case 0: 
			strcpy(vector[contador].signo.animal,"mandril");
			break;
		case 1:
			strcpy(vector[contador].signo.animal,"rata");
			break;
		case 2: 
			strcpy(vector[contador].signo.animal,"dragon");
			break;
	}
	
	elem=vector[contador].fecha.anyo;
	suma2=0;
	suma=1; //Para asignarle un valor distinto de 0, y entre en el while
	while (suma !=0) {
		suma=elem%10;
		elem=elem/10;
		suma2=suma2+suma;
	}
	if (suma2%2==0) {
		strcpy(vector[contador].signo.elemento,"fuego");
	} else {
		strcpy(vector[contador].signo.elemento,"agua");
	}
}
    
void listado(int &contador, THoroscopo vector) {
	int i,cont;
	TNombre elemento;
	
	cont=0;
	cout<<"\nIntroduzca el elemento a buscar: ";
	cin>>elemento;
	cout<<"\nLos datos archivados son: ";
	
	for (i=0;i<contador;i++) {
		cout<<endl<<vector[i].nombre<<" - "<<vector[i].signo.animal<<" - "<<vector[i].signo.elemento;
		cout<<"\n------------------------------------------";
		if (strcmp(vector[i].signo.elemento,elemento)==0) {
			cont++;
		}
	}
	cout<<"\nHay "<<cont<<" amigos a los que les corresponde el elemento "<<elemento<<endl;
}