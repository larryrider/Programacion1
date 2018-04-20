//Trabajo realizado por: Lawrence Arthur Rider Garcia
/*Debes implementar un programa en C que permita jugar al juego Piedra,
Papel, Tijera. El juego constará de varias rondas y ganará el que gane 2 rondas. El juego
terminará cuando el usuario ya no quiera seguir jugando.
Ejercicio Propuesto 4.
El programa deberá mostrar en cada ronda, las rondas que lleva ganadas cada jugador. Y al
final de la partida, las partidas que lleva ganadas cada jugador.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char apuestaUsuario();
char piedraPapelTijera();
void comprobar(int &rondasmaquina, int &rondasusuario, char &usuario, char &maquina, int &partidapc, int &partidauser);

main() {
  	srand(time(0)); //para que funcione la funcion rand() para asignar valores al azar.
  
  	char usuario,maquina, jugar;
  	int rondasmaquina, rondasusuario, partidapc, partidauser;

  	partidapc=0;
  	partidauser=0;
  
  	cout<<"\n*** PIEDRA, PAPEL O TIJERAS ***\n";
  
  	do {
		cout<<"¿Quieres jugar? (s/n): ";
		cin>>jugar;
		if (jugar=='n') {
			cout<<"\nJuego finalizado.\n";
		}
		if (jugar!='n' && jugar!='N' && jugar!='s' && jugar!='S') {
			cout<<"\n\nIntroduzca un caracter válido.\n\n";
		}
	} while (jugar!='n' && jugar!='N' && jugar!='s' && jugar!='S'); //Validación de la opcion de iniciar el juego.
	
	while (jugar=='s' || jugar=='S') {
		rondasmaquina=0;
		rondasusuario=0;
		while (rondasmaquina<2 && rondasusuario<2){
			usuario=apuestaUsuario();
			maquina=piedraPapelTijera();
			comprobar(rondasmaquina,rondasusuario,usuario,maquina,partidapc,partidauser);
		}
		do{ 
			cout<<"\n¿Quieres volver a jugar? (s/n): ";
			cin>>jugar;
			if (jugar=='n') {
				cout<<"\nJuego finalizado.\n";
			}
			if (jugar!='n' && jugar!='N' && jugar!='s' && jugar!='S') {
				cout<<"\n\nIntroduzca un caracter válido.\n\n";
			}
		} while (jugar!='n' && jugar!='N' && jugar!='s' && jugar!='S'); //Validación de la opcion de continuar jugando.
	}
}
  
char apuestaUsuario(){ //Este modulo se encarga de pedir al usuario su eleccion, y de validar la misma.
	char eleccion;
		
	do{
		cout<<"\n¿Piedra, papel, tijeras? (p/a/t): ";
		cin>>eleccion;
		cout<<endl;
		if (eleccion!='p' && eleccion!='a' && eleccion!='t') {
			cout<<"\nError, introduzca una eleccion correcta.\n";
		} else if (eleccion=='p') {
			cout<<"TU: piedra\n";
		}else if (eleccion=='a') {
			cout<<"TU: papel\n";
		}else {
			cout<<"TU: tijeras\n";
		}
	}while (eleccion!='p' && eleccion!='a' && eleccion!='t');
	
	return (eleccion);
}
    
char piedraPapelTijera(){ //Este modulo se encarga de asignar al azar la eleccion de la maquina.
	char eleccionm;
	
	eleccionm=rand()%3+1;
	
	switch (eleccionm){
		case 1:
			eleccionm='p';
			break;
		case 2:
			eleccionm='a';
			break;
		case 3:
			eleccionm='t';
			break;
	}
  
	cout <<"ORDENADOR: ";
	if (eleccionm=='p') {
		cout<<"piedra\n";
	} else if (eleccionm=='a') {
		cout<<"papel\n";
	} else {
		cout<<"tijeras\n";
	}
	
	return (eleccionm);  
}

void comprobar(int &rondasmaquina, int &rondasusuario, char &usuario, char &maquina, int &partidapc, int &partidauser){
   	if (maquina=='a' && usuario=='t') {
    	cout<<"\nTú ganas.\n";
	    rondasusuario++;
	    cout<<"Rondas ganadas: \n"<<"Maquina: "<<rondasmaquina;
	    cout<<"\nUsuario: "<<rondasusuario<<endl;
    } else if (maquina=='t' && usuario=='a') {
		cout<<"\nGana la máquina.\n";
		rondasmaquina++;
		cout<<"Rondas ganadas: \n"<<"Maquina: "<<rondasmaquina;
		cout<<"\nUsuario: "<<rondasusuario<<endl;
	} else if (maquina<usuario) {
		cout<<"\nGana la máquina.\n";
		rondasmaquina++;
		cout<<"Rondas ganadas: \n"<<"Maquina: "<<rondasmaquina;
		cout<<"\nUsuario: "<<rondasusuario<<endl;
	} else if (usuario<maquina) {
		cout<<"\nTú ganas.\n";
		rondasusuario++;
		cout<<"Rondas ganadas: \n"<<"Maquina: "<<rondasmaquina;
		cout<<"\nUsuario: "<<rondasusuario<<endl;
	} else {
		cout<<"\nEmpate, nadie incrementa puntuación.\n";
	}
	if (rondasmaquina==2) {
		partidapc++;
		cout<<"\n¡OH, HAS PERDIDO!\n"<<"Partidas ganadas: ";
		cout<<"\nUsuario: "<<partidauser<<"\nOrdenador: "<<partidapc<<endl;
	}else if (rondasusuario==2) {
		partidauser++;
		cout<<"\n¡OH, HAS GANADO!\n"<<"Partidas ganadas: ";
		cout<<"\nUsuario: "<<partidauser<<"\nOrdenador: "<<partidapc<<endl;
	}
}