#ifndef PELICULA_HPP
#define PELICULA_HPP
#include <string>
using namespace std; 
class Pelicula
{
	private: 
	string titulo; 
	string director; 
	string genero; 
	int valoracion; 
	
	public:
		Pelicula();
		~Pelicula();
		Pelicula(string titulo,string director,string genero,int valoracion);
		
		// gets and sets 
		void set_titulo(string);
		string get_titulo(); 
		 // director
		 void set_director(string); 
		 string get_director(); 
		 // genero
		 void set_genero(string); 
		 string get_genero(); 
		 // valoracion 
		 void set_valoracion(int);
		 int get_valoracion(); 
		   
		
		
};

#endif