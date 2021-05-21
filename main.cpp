#include <iostream>
#include <string>
#include <random>
#include <vector>
#include "Pelicula.hpp"
#include "HTHplus.hpp"
using namespace std; 
int menu(); 

int main() {
	
	int opc=0; 
	while(opc!=7){
		opc = menu(); 
	}
	
	return 0;
}

int menu(){
	int opc=0;
	while(opc!=7){
		cout<<"..........Menu............"<<endl; 
		cout<<"1........................Agregar Pelicula"<<endl; 
		cout<<"2........................Modificar Pelicula"<<endl; 
		cout<<"3........................Eliminar Pelicula"<<endl; 
		cout<<"4........................Imprimir Peliculas por genero"<<endl; 
		cout<<"5........................Buscar Pelicula"<<endl; 
		cout<<"6........................Imprimir peliculas ordenadas por valoracion"<<endl; 
		cout<<"7........................Salir"<<endl; 
		cout<<"Ingrese la opcion que desea: "<<endl; 
		cin>>opc; 
		
		
		switch(opc){
			case 1:{
				
				
				
				
				return 1;
				break;
			}
			
			case 2:{
				return 2;
				break;
			}
			
			case 3:{
				return 3;
				break;
			}
			
			case 4:{
				return 4; 
				break;
			}
			
			case 5:{
				return 5; 
				break;
			}
			
			
			case 6:{
				return 6; 
				break;
			} 
			
			case 7:{
				
				cout<<"Adios..."<<endl; 
				return 7; 
				break;
			}
			
			default:{
				
				cout<<"Ingrese una opcion incorrecta :'c "<<endl;
				return 0; 
				break;
			}
				
				
		}
		
		
		
	} 
	
	
	
}
