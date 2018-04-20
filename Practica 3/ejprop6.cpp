#include <iostream>
using namespace std;

int main()
{
    char dato;

    cout <<"\nIntroduce el dato: ";
    cin >> dato;
    cout << endl;
    
    if (dato>='a' && dato<='z'){ 
      	if (dato=='a' || dato=='e' || dato=='i' || dato=='o' || dato=='u'){
			cout<<"\nEl dato introducido es un carácter. Además, es una vocal en minúscula.\n\n"; 
		} else {
			cout<<"\nEl dato introducido es un carácter. Además, es una consonante en minúscula.\n\n";
		}
	} 
    
    if (dato>='A' && dato<='Z'){
		if (dato=='A' || dato=='E' || dato=='I' || dato=='O' || dato=='U') {
			cout<<"\nEl dato introducido es un carácter. Además, es una vocal en mayúscula.\n\n"; 
		} else {
		  	cout<<"\nEl dato introducido es un carácter. Además, es una consonante en mayúscula.\n\n";
		}
	}
    
    if ((dato<'A' || dato>'Z') && (dato<'a' || dato>'z')){
		cout<<"\nEl dato introducido no es un carácter.\n\n";
	}
}