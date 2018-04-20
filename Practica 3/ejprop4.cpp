#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;

    cout <<"\nIntroduce 3 números: ";
    cin >> num1 >> num2 >> num3;
    cout << endl;
    
    switch (num1<num2) {
      	case true: 
		  	if (num2<num3) {
			  	cout <<"\nEl número 1 es el menor,el número 2 es el del medio y el número 3 el mayor.\n\n";
			} else if (num3<num1) {
				cout <<"\nEl número 3 es el menor, el número 1 es el del medio y el número 2 el mayor.\n\n";  
			} else {
				cout <<"\nEl número 1 es el menor, el número 3 es del medio y el número 2 es el mayor.\n\n";
			}
			break;
      	case false: 
	  		if (num2>num3) {
				cout <<"\nEl número 3 es el menor, el número 2 es el del medio y el número 1 el mayor.\n\n";
			} else if (num1>num3) {
				cout <<"\nEl número 2 es el menor, el número 3 es el del medio y el número 1 el mayor.\n\n";
			}else {
				cout <<"\nEl número 2 es el menor, el número 1 es el del medio y el número 3 el mayor.\n\n";
			}
			break;
    }
}