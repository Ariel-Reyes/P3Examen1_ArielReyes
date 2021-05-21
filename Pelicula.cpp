#include "Pelicula.hpp"

Pelicula::Pelicula() {
}

Pelicula::~Pelicula() {
}
Pelicula::Pelicula(string titulo,string director,string genero,int valoracion) {
	this->titulo = titulo;
	this->director = director;
	this->genero = genero;
	this->valoracion = valoracion;
};

// gets and sets
void Pelicula::set_titulo(string titulo) {
	this->titulo = titulo;
};

string Pelicula::get_titulo() {
	return this->titulo;
};
// director
void Pelicula::set_director(string director) {
	this->director = director;
};
string Pelicula::get_director() {
	return this->director;
};
// genero
void Pelicula::set_genero(string genero) {
	this->genero = genero;
};
string Pelicula::get_genero() {
	return this->genero;
};
// valoracion
void Pelicula::set_valoracion(int valoracion) {
	this->valoracion = valoracion;
};
int Pelicula::get_valoracion() {
	return this->valoracion;
};
