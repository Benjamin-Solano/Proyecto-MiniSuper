#include "Carne.h"

Carne::Carne(string cod, string nomC, string des, double preC, int ex, int lim, Fecha * fecha, bool nac, double pes, Perecedero * vence, string nomA, string parteAnimal) : 
	Producto_Perecedero(cod, nomC, des, preC, ex, lim, fecha, nac, pes, vence), nombre_Animal(nomA), parte_del_Animal(parteAnimal) {}
Carne:: ~Carne() { }

void Carne::setNombreAnimal(string nuevoNombre) { nombre_Animal = nuevoNombre; }
void Carne::setParte_Del_Animal(string nuevaParte) { parte_del_Animal = nuevaParte; }

string Carne::getNombreAnimal() { return nombre_Animal; }
string Carne::getParteDelAnimal() { return parte_del_Animal; }
