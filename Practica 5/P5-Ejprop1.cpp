//Trabajo realizado por: Lawrence Arthur Rider Garcia
/*Realiza un programa en C que calcule el área de diferentes figuras geométricas.
Concretamente de un rectángulo, un triángulo y un círculo. El programa deberá mostrar un menú con las
diferentes opciones (más la opción de terminar) y posteriormente preguntar los datos necesarios para el
cálculo del área.*/

#include <iostream>
using namespace std;
PI=3,14159265359;

void rectangulo();
void triangulo();
void circulo();
int menu();

main() {
    int opcion;

    opcion=menu();
    
    do {
      	switch (opcion) {
			case 1: 
				rectangulo();
				break;
			case 2: 
				triangulo();
				break;
			case 3: 
				circulo();
				break;
			case 4: 
				cout <<"\nFinalizando programa.\n\n";
				break;
		}
    } while (opcion!=4);
}

int menu(){
  	int opcion;
  
  	do {
		cout<<"\n1.Area del rectangulo.\n";
		cout<<"2.Area del triangulo.\n";
		cout<<"3.Area del circulo.\n";
		cout<<"4.Finalizar programa.\n";
		cout<<"\nIntroduzca la opcion: ";
		cin>>opcion;
		
		if (opcion>4 || opcion<1) 
			cout<<"\n\nError. Opcion incorrecta. Introduzca de nuevo.\n\n";
  	} while (opcion>4 || opcion<1);
  
  	return (opcion);
}

void rectangulo() {
    float altura,base,area;
    
    cout<<"Introduzca la altura: ";
    area=altura*base;
}