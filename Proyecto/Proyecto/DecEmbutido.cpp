#include "DecEmbutido.h"

// Constructor y Destructor...
DecEmbutido::DecEmbutido(Compra* compra, Embutido* embutido) : ProductoAbs(compra), ptrEmbutido(embutido) { }
DecEmbutido::~DecEmbutido() { }

// Set y Get de emergencia...
void DecEmbutido::setEmbutido(Embutido* nuevoEmbutido) { ptrEmbutido = nuevoEmbutido; }
Embutido* DecEmbutido::getEmbutido() { return ptrEmbutido; }

// Metodos que interesan de la relacion de uso....
string DecEmbutido::Obtener_Nombre() {
	return ptrEmbutido->getNombre_Comercial();
}

double DecEmbutido::Obtener_Costo() {
	return ptrEmbutido->getPrecio_Costo() + ptrEmbutido->obtenerPorcentajeGanancia();
}

string DecEmbutido::Obtener_Codigo() {
	return ptrEmbutido->getCodigo();
}

string DecEmbutido::toString() {
	stringstream s;
	s << this->Obtener_Nombre() << endl;
	s << "Precio: " << this->Obtener_Costo() << endl;
	s << "==========================" << endl;
	s << ptrCompra->toString();
	return s.str();
}
