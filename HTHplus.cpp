#include "HTHplus.hpp"
#include "Pelicula.hpp"
using namespace std;
#include <iostream>
HTHplus::HTHplus() {
}

HTHplus::~HTHplus() {
}

HTHplus::HTHplus(vector<Pelicula*> lista_pelis) {

	this->lista_pelis = lista_pelis;
};
// gets and sets para la lista de pelis
void HTHplus::set_pelicula_alista(Pelicula* x) {
	lista_pelis.push_back(x);
};
vector<Pelicula*> HTHplus::get_pelicula_lista() {
	return this->lista_pelis;
};
// metodos
void HTHplus::imprimir_genero() {

	Pelicula* peli;
	vector<string> a;
	for(int i=0;i<lista_pelis.size();i++){
	
		peli = lista_pelis[i];
		a.push_back(peli->get_genero());
}

	Pelicula* p; 
	
	
	
	for(int i=0;i<a.size();i++){
		
	
			string genero = a[i]; 
		cout<<"El genero: "<<genero<<endl; 
		for(int j=0;j<lista_pelis.size();j++){
	     p = lista_pelis[j]; 
	       if(p->get_genero()==genero){
	       	cout<<"El titulo: "<<p->get_titulo()<<endl; 
		   } 
		   
	       
	
	
		
		}
}
}

void HTHplus::buscar_pelicula(string peli) {
}
void HTHplus::puntuaciones() {

};

void HTHplus::eliminar(int x) {
	lista_pelis.erase(begin(lista_pelis)+x);
};
