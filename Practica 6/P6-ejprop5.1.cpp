//Práctica 6 realizada por: Lawrence Arthur Rider García.

/*Escribir un módulo recursivo void parYmayorN(int n, int elem) que
imprima por pantalla los números desde 1 hasta n que son pares y mayores que elem. Por ejemplo,
si n es 10 y elem es 4, imprimirá por pantalla 6, 8, 10.*/


#include <iostream>

using namespace std;

void parYmayorN (int n, int elem);

main() {
	int n, elem;
  
	do {
		cout<<"\nIntroduzca el numero desde el cual se empieza a mostrar los pares: ";
		cin>>elem;
		if (elem<1) {
			cout<<"\n\nIntroduzca un número mayor que 1.\n\n";
		}
	} while (elem<1);
	
	do {
		cout<<"\nIntroduzca el numero hasta el cual se mostraran los pares: ";
		cin>>n;
		if (n<1) {
			cout<<"\n\nIntroduzca un número mayor que 1.\n\n";
		}
		if (elem>n) {
			cout<<"\n\nIntroduzca un número mayor que el inicial.\n\n";
		}
	} while (n<1 || elem>n);
	
	
	parYmayorN (n,elem);
	cout<<endl<<endl;
}

void parYmayorN (int n, int elem) {
	if (elem<n) {
		parYmayorN(n-1,elem);
	}

	if (elem<n && n%2==0) {
     	cout<<endl<<n;
	}
}