#include <iostream>
#include <conio.h>
#include <string>
#include <random>
#include <time.h>
using namespace std;
char* retorno_cadena();
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
				a = retorno_cadena();
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

char* retorno_cadena() {
	static char arre[100];
	cout<<"Ingrese el size del arreglo"<<endl;
	int size;
	cin>>size;
	arre[size];

	for(int i=0; i<size; i++) {
		cout<<"Ingrese el valor de la posicion: "<<i<<": "<<endl;
		cin>>arre[i];

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
		}

	}


	return matriz;

};


