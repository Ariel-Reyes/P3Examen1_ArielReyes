#include "HTHplus.hpp"
#include "Pelicula.hpp"
HTHplus::HTHplus()
{
}

HTHplus::~HTHplus()
{
}

 HTHplus::HTHplus(vector<Pelicula*> lista_pelis){
 	
 	this->lista_pelis = lista_pelis; 
 };
	    // gets and sets para la lista de pelis 
	    void HTHplus::set_pelicula_alista(Pelicula* x){
	    lista_pelis.push_back(x); 
		}; 
	    vector<Pelicula*> HTHplus::get_pelicula_lista(){
	    	return this->lista_pelis; 
		}; 
	    // metodos 
	    void imprimir_genero(){
		}; 
	    void buscar_pelicula(string peli){
		}; 
	    void puntuaciones(){
	    	
		}; 