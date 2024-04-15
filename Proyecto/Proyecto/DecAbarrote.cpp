#include "DecAbarrote.h"

// Constructor y Destructor...
DecAbarrote::DecAbarrote(Compra* compra, Abarrote* abarrote) : ProductoAbs(compra), ptrAbarrote(abarrote) {}
DecAbarrote::~DecAbarrote() {}

// Get y Set de emergencia...
Abarrote* DecAbarrote::getAbarrote() { return ptrAbarrote; }
void DecAbarrote::setAbarrote(Abarrote* nuevoAbarrote) { ptrAbarrote = nuevoAbarrote; }

// Metodos que interezan de la relacion de USO
string DecAbarrote::Obtener_Nombre() {
	return ptrAbarrote->getNombre_Comercial();
}

double DecAbarrote::Obtener_Costo() {
	return ptrAbarrote->getPrecio_Costo() + ptrAbarrote->obtenerPorcentajeGanancia();
}

string DecAbarrote::Obtener_Codigo() {
	return ptrAbarrote->getCodigo();
}

string DecAbarrote::toString() {
	stringstream s;
	s << this->Obtener_Nombre() << endl;
	s << "Precio: " << this->Obtener_Costo() << endl;
	s << "==========================" << endl;
	s << ptrCompra->toString();
	return s.str();
}