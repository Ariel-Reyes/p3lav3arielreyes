#include <iostream>
using namespace std; 

int main() {
	int opc =0; 
	while(opc!=4){
		
		cout<<"-----Menu------"<<endl; 
		cout<<"1...........Cadena Direcciones"<<endl; 
		cout<<"2...........Matriz con Obstrucciones"<<endl; 
		cout<<"3...........Matriz con instrucciones"<<endl; 
		cout<<"4...........Salir"<<endl; 
		cin>>opc; 
		switch(opc){
			case 1:{
				break;
			}
			case 2:{
				break;
			}
			
			case 3:{
				break;
			}
			
			case 4:{
				cout<<"Saliendo..."<<endl;
				break;
			}
			default:{
				cout<<"Ingreso una opcion incorrecta"<<endl; 
				break;
			}
		}
		
	}
	
	return 0;
}