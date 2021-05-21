#ifndef HTHPLUS_HPP
#define HTHPLUS_HPP
#include <vector>
#include "Pelicula.hpp"
#include <string>
using namespace std;

class HTHplus {

	private:
		vector<Pelicula*> lista_pelis;

	public:
		HTHplus();
		~HTHplus();
		HTHplus(vector<Pelicula*> lista_pelis);
		// gets and sets para la lista de pelis
		void set_pelicula_alista(Pelicula peli);
		vector<Pelicula*> get_pelicula_lista();
		// metodos
		void imprimir_genero();
		void buscar_pelicula(string peli);
		void puntuaciones();




};

#endif