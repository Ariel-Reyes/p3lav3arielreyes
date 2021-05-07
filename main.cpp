#include <iostream>
#include <conio.h>
#include <string>
#include <random>
#include <time.h>
using namespace std;
char* retorno_cadena(int tam);
char** retorno_matriz(int filas,int columnas,int obstaculos);
int main() {
	srand(time(0));

	int opc =0;
	while(opc!=4) {

		cout<<"-----Menu------"<<endl;
		cout<<"1...........Cadena Direcciones"<<endl;
		cout<<"2...........Matriz con Obstrucciones"<<endl;
		cout<<"3...........Matriz con instrucciones"<<endl;
		cout<<"4...........Salir"<<endl;
		cin>>opc;
		switch(opc) {
			case 1: {
				char* a;
				int tam;
				cout<<"Ingrese el tama"<<endl;
				cin>>tam;
				a = retorno_cadena(tam);

				for(int i=0; i<tam; i++) {
					cout<<*(a+i)<<endl;
				}




				break;
			}
			case 2: {
				char** matriz;
				cout<<"Ingrese filas: "<<endl;
				int filas;
				cin>>filas;
				cout<<"Ingrese columnas: "<<endl;
				int columnas ;
				cin>>columnas;
				cout<<"Ingrese la cantidad de obstaculos: "<<endl;
				int obstaculos;
				cin>>obstaculos;
				matriz = retorno_matriz(filas,columnas,obstaculos);
				for(int i=0; i<filas; i++) {
					cout<<"|";
					for(int j=0; j<columnas; j++) {
						cout<<"'"<<matriz[i][j]<<"'";
					}
					cout<<"|";
					cout<<endl;
				}


				break;
			}

			case 3: {
				break;
			}

			case 4: {
				cout<<"Saliendo..."<<endl;
				break;
			}
			default: {
				cout<<"Ingreso una opcion incorrecta"<<endl;
				break;
			}
		}

	}

	return 0;
}

char* retorno_cadena(int tam) {
	static char arre[100];

	arre[tam];
	string ac;
	string ac2;

	for(int i=0; i<tam; i++) {
		cout<<"Ingrese el valor de la posicion: "<<i<<": "<<endl;
		cin>>arre[i];
	}

	int nu;
	for(int i=0; i<tam; i++) {
		int num = int(arre[i]);

		if(num>=48 && num<=57) {
			ac+= arre[i];

		}

		if(num>=48 && num<=57) {
             int num_plus = int(arre[i+1]); 
			if(num_plus>=48 && num<=57) {
				ac = ac + arre[i+1];			
			}

		}
		int num_letra = (int) arre[i];
		if(num_letra==68||num_letra==85||num_letra==82||num_letra==76||num_letra==100||num_letra==108||num_letra==117||num_letra==114) {
			nu = stoi(ac);

			for(int j=0; j<nu; j++) {
				ac2 = ac2 + arre[i];
			}
			ac = "";


		}


	}
	for(int i=0; i<ac2.size(); i++) {
		arre[i] = ac2[i];
	}




	return arre;
};
char** retorno_matriz(int filas,int columnas, int obstaculos) {

	char** matriz = new char*[filas];

	for(int i=0; i<filas; i++) {
		matriz[i] = new char[columnas];
	}

	for(int i=0; i<filas; i++) {
		for(int j=0; j<columnas; j++) {
			matriz[i][j] = '-';
		}
	}

	for(int i=0; i<obstaculos; i++) {
		int ri =  rand()% filas;
		int rj = rand() % columnas;

		char m = matriz[ri][rj];
		int pala = '-';
		if(matriz[ri][rj]==pala) {
			matriz[ri][rj]='#';
		} else {
			ri =  rand()% filas;
			rj = rand() % columnas;
			matriz[ri][rj]='#';
		}

	}


	return matriz;

};


