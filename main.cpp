#include <iostream>
#include <string>
#include <random>
#include <vector>
#include "Pelicula.hpp"
#include "HTHplus.hpp"
#include <time.h>

using namespace std;
int menu();
HTHplus *h = new HTHplus();
int main() {
	srand(time(NULL));

	int opc=0;
	while(opc!=8) {
		opc = menu();
	}

	return 0;
}

int menu() {
	srand(time(NULL));

	int opc=0;

	cout<<"..........Menu............"<<endl;
	cout<<"1........................Agregar Peliculas"<<endl;
	cout<<"2........................Modificar Peliculas"<<endl;
	cout<<"3........................Eliminar Peliculas"<<endl;
	cout<<"4........................Listar Peliculas"<<endl;
	cout<<"5........................Imprimir Peliculas por genero"<<endl;
	cout<<"6........................Buscar Pelicula"<<endl;
	cout<<"7........................Imprimir peliculas ordenadas por valoracion"<<endl;
	cout<<"8........................Salir"<<endl;
	cout<<"Ingrese la opcion que desea: "<<endl;
	cin>>opc;


	switch(opc) {
		case 1: {
			cout<<"...........Agregar Pelicula............."<<endl;
			cout<<"Ingrese el titulo: "<<endl;
			string titulo;
			getline(cin,titulo);
			getline(cin,titulo);
			cout<<"Ingrese el director: "<<endl;
			string director;
			getline(cin,director);


			cout<<"Ingrese el Genero: "<<endl;
			string genero;
			getline(cin,genero);


			int valoracion = 1+ rand() % 5;
			cout<<"La valoracion en numero random es: "<<valoracion<<endl;

			h->set_pelicula_alista(new Pelicula(titulo,director,genero,valoracion));

			cout<<"Pelicula agreda correctamente :) "<<endl;
			return 1;
			break;
		}

		case 2: {
			Pelicula* peli;
			cout<<".........Modificar Pelicula........."<<endl;
			for(int i=0; i<h->get_pelicula_lista().size(); i++) {
				peli = h->get_pelicula_lista()[i];
				cout<<i<<")"<<peli->get_titulo()<<endl;
			}

			cout<<"Ingrese el indice de la pelicula que desea modificar: "<<endl;
			int indice;
			cin>>indice;
			while(indice>h->get_pelicula_lista().size() || indice<0 ) {
				cout<<"Ingrese el indice de la pelicula que desea modificar: "<<endl;
				cin>>indice;
			}
			peli = h->get_pelicula_lista()[indice];
			cout<<"______________Que desea modificar de la pelicula___________"<<endl;
			cout<<"1.............Titulo"<<endl;
			cout<<"2.............Director"<<endl;
			cout<<"3.............Genero"<<endl;
			cout<<"4.............valoracion"<<endl;
			cout<<"Ingrese la opcion que desea: "<<endl;
			int op;
			cin>>op;

			switch(op) {
				case 1: {
					string titulo;
					cout<<"Ingrese el titulo: "<<endl;
					getline(cin,titulo);
					getline(cin,titulo);


					peli->set_titulo(titulo);
					break;
				}

				case 2: {
					string director;
					cout<<"Ingrese el Director: "<<endl;
					cin>>director;


					peli->set_director(director);
					break;
				}

				case 3: {
					string genero;
					cout<<"Ingrese el Genero: "<<endl;
					cin>>genero;


					peli->set_genero(genero);
					break;

					break;
				}

				case 4: {
					int valoracion = 1 + rand() %5;
					peli->set_valoracion(valoracion);
					break;
				}
			}




			return 2;
			break;
		}

		case 3: {
			if(h->get_pelicula_lista().size()<=0) {
				cout<<"Aun no hay peliculas"<<endl;
			} else {

				Pelicula* peli;
				cout<<"..............Eliminar Pelicula................."<<endl;
				for(int i=0; i<h->get_pelicula_lista().size(); i++) {
					peli = h->get_pelicula_lista()[i];
					cout<<i<<")"<<peli->get_titulo()<<endl;
				}
				cout<<"Ingrese el indice de la pelicula que desea Eliminar: "<<endl;
				int indice;
				cin>>indice;
				while(indice>h->get_pelicula_lista().size() || indice<0 ) {
					cout<<"Ingrese el indice de la pelicula que desea modificar: "<<endl;
					cin>>indice;
				}

				h->eliminar(indice);

				return 3;
				break;
			}
		}

		case 4: {
			if(h->get_pelicula_lista().size()<=0) {
				cout<<"Aun no hay peliculas"<<endl;
			} else {

				cout<<"..............Listar Pelicula............."<<endl;
				Pelicula* peli;

				for(int i=0; i<h->get_pelicula_lista().size(); i++) {
					peli = h->get_pelicula_lista()[i];
					cout<<i<<")"<<" Titulo: "<<peli->get_titulo()<<" Director: "<<peli->get_director()<<" Genero"<<peli->get_genero()<<" Valoracion: "<<peli->get_valoracion()<<endl;
				}

				return 4;
				break;
			}
		}

		case 5: {
			if(h->get_pelicula_lista().size()<=0) {
				cout<<"Aun no hay peliculas"<<endl;
			} else {
				h->imprimir_genero();
				return 5;
				break;
			}
		}


		case 6: {

			if(h->get_pelicula_lista().size()<=0) {
				cout<<"Aun no hay peliculas"<<endl;
			} else {
				cout<<"Ingrese la busqueda: "<<endl;
				string cadena;
				cin>>cadena;
				h->buscar_pelicula(cadena);

			}

			return 6;
			break;
		}

		case 7: {
			if(h->get_pelicula_lista().size()<=0) {
				cout<<"Aun no hay peliculas"<<endl;
			} else {
				h->puntuaciones();
			}
			return 7;
			break;
		}

		case 8: {
			cout<<"Adios..."<<endl;

			return 8;
			break;
		}
		default: {

			cout<<"Ingrese una opcion incorrecta "<<endl;
			return 0;
			break;
		}


	}







}
