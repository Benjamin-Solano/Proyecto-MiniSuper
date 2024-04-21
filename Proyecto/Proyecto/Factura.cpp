#include "Factura.h"

Factura::Factura(Venta* v) : venta(v) {}
Factura::~Factura() { }

// Get y Set POR si acaso
Venta* Factura::getVenta() { return venta; }
void Factura::setVenta(Venta* nuevaVenta) { venta = nuevaVenta; }

// Relacion de USO
string Factura::mostrar_Factura() {
	stringstream s;
	s << "+========== FACTURA MINISUPER ===========+" << endl;
	s << "ID cliente  : " << venta->getCliente()->getCedula() << endl;
	s << "Fecha Compra: " << venta->getFecha()->mostrar_Fecha() << endl;
	s << "+========================================+" << endl;
	s << venta->getProducto()->toString() << endl;
	s << "Total a pagar: " << venta->Obtener_Total_Venta() << " Colones" << endl;
	s << "+========================================+" << endl;
	return s.str();
}