#include <iostream>
using namespace std;

int main() {
    int dia,mes,anyo;

    cout <<"\nIntroduce el día: ";
    cin >> dia;
    cout<<endl;
    cout <<"\nIntroduce el mes: ";
    cin >> mes;
    cout<<endl;
    cout <<"\nIntroduce el anyo: ";
    cin >> anyo;
    cout<<endl;
    
    if ((dia>=1 && dia<=31) && (mes>=1 && mes<=12)) {
	    switch (mes){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (dia>31) {
					cout<<"\nLa fecha es incorrecta.\n\n";
		  		} else { 
					dia=dia+1;
					
					if (dia>31) {
						mes=mes+1;
						dia=1;
					}
					if (mes>12) {
						anyo=anyo+1;
						mes=1;
					}
					cout << "\nLa fecha es correcta.\nEl día siguiente es: ";
					cout << dia << "-" << mes << "-" << anyo << endl << endl;
				}
	       		break;
	      	case 2:
				if (((anyo%100!=0) && (anyo%4==0)) || (anyo%400==0)) {
					if (dia>29) {
						cout<<"\nLa fecha es incorrecta.\n\n";
					} else { 
						dia=dia+1;
						if (dia>29){
							mes=mes+1;
							dia=1;
						}
						cout << "\nLa fecha es correcta.\nEl día siguiente es: ";
						cout << dia << "-" << mes << "-" << anyo << endl <<endl;
					}
				} else {
					if (dia>28) {
						cout<<"\nLa fecha es incorrecta.\n\n";
					} else{ 
						dia=dia+1;
						if (dia>28){
							mes=mes+1;
							dia=1;
						}
						cout << "\nLa fecha es correcta.\nEl día siguiente es: ";
						cout << dia << "-" << mes << "-" << anyo << endl <<endl;
					}
				}
		 		break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (dia>30) {
					cout<<"\nLa fecha es incorrecta.\n\n";
				} else { 
					dia=dia+1;
		    		if (dia>30){
						mes=mes+1;
						dia=1;
		    		}
					cout << "\nLa fecha es correcta.\nEl día siguiente es: ";
					cout << dia << "-" << mes << "-" << anyo << endl <<endl;
		  		}
				break;
	    }
	} else {
		cout << "\n\nLa fecha no es correcta." << endl;
	}
}