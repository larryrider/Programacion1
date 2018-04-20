#include <iostream>
using namespace std;

int main() {
    double horaent,horasal,minuent,minusal,horatot,minutot;

    cout <<"\nIntroduce la hora de entrada: ";
    cin >> horaent;
    cout <<"Introduce los minutos de entrada: ";
    cin >> minuent;
    cout <<"\nIntroduce la hora de salida: ";
    cin >> horasal;
    cout <<"Introduce los minutos de salida: ";
    cin >> minusal;
    cout<<endl;
    horatot=0;
    minutot=0;

    if (horaent<0 || horaent>24 || horasal<0 || horasal>24 || minuent<0 || minuent>=60 || minusal<0 || minusal>=60) {
		cout<<"\nHorario incorrecto.\n\n";
	else {
		if (horaent<horasal) {
			minutot=(60-minuent)+(minusal)+(60*(horasal-horaent-1));
		}
		if (horaent>horasal) {
			minutot=(60-minuent)+(60*horasal)+minusal;
			horatot=24-horaent-1;
		}
      	while (minutot>=60) {
			minutot=minutot-60;
			horatot=horatot+1;
      	}
      	cout<<"\nEl tiempo trabajado es: " <<horatot<<" horas y "<<minutot<<" minutos.\n\n";
    }
}