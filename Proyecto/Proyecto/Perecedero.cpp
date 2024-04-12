#include "Perecedero.h"

Perecedero::Perecedero(Fecha* per) : perece(per) { }
Perecedero::~Perecedero() { if (perece) delete perece; }

string Perecedero::Vence() {
	stringstream salida;
	salida << perece->mostrar_Fecha();
	return salida.str();
}