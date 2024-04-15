#include "DecConserva.h"

DecConserva::DecConserva(Compra* compra, Conserva* conser) : ProductoAbs(compra), ptrConserva(conser) { }
DecConserva:: ~DecConserva() { }

Conserva* DecConserva::getConserva() { return ptrConserva; }
void DecConserva::setConserva(Conserva* nuevaConserva) { ptrConserva = nuevaConserva; }

// Metodos que interezan de la relacion de USO
string DecConserva::Obtener_Nombre() {
	return ptrConserva->getNombre_Comercial();
}

double DecConserva::Obtener_Costo() {
	return ptrConserva->getPrecio_Costo() + ptrConserva->obtenerPorcentajeGanancia();
}

string DecConserva::Obtener_Codigo() {
	return ptrConserva->getCodigo();
}


string DecConserva::toString() {
	stringstream s;
	s << this->Obtener_Nombre() << endl;
	s << "Precio: " << this->Obtener_Costo() << endl;
	s << "==========================" << endl;
	s << ptrCompra->toString();
	return s.str();
}