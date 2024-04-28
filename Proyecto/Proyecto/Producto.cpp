#pragma once
#include "Producto.h"

Producto::Producto(){
	codigo = "???";
	nombre_Comercial = "???";
	descripcion = "???";
	precio_Costo = 0.0;
	categoria = "???";
	existencia = 0;
	limite = 0;
	// Asociacion a Fecha
	fechaPtr = new Fecha();
	cat = new Categoria;
}
Producto::Producto(string cod, string nomC, string des, double preC, int ex, int lim, Fecha* fecha) : 
codigo(cod), nombre_Comercial(nomC), descripcion(des), precio_Costo(preC), existencia(ex), limite(lim), fechaPtr(fecha) {
	categoria = "???";
	cat = new Categoria;
}
Producto:: ~Producto(){ if (fechaPtr) delete fechaPtr; }

string Producto::getCodigo() { return codigo; }
string Producto::getNombre_Comercial() { return nombre_Comercial; }
string Producto::getDescripcion() { return descripcion; }
double Producto::getPrecio_Costo() const { return precio_Costo; }
string Producto::getCategoria() { return categoria; }
int Producto::getExistencia() { return existencia; }
int Producto::getLimite() { return limite; }
Fecha* Producto::getFecha_Ingresada() { return fechaPtr; }

void Producto::setCodigo(string nuevoCodigo) { codigo = nuevoCodigo; }
void Producto::setNombre_Comercial(string nuevoNombre) { nombre_Comercial = nuevoNombre; }
void Producto::setDescripcion(string nuevaDescripcion) { descripcion = nuevaDescripcion; }
void Producto::setPrecio_costo(double nuevoPrecio) { precio_Costo = nuevoPrecio; }
void Producto::setCategoria(string nuevaCategoria) { categoria = nuevaCategoria; }
void Producto::setExistencia(int nuevaExistencia) { existencia = nuevaExistencia; }
void Producto::setLimite(int nuevolimite) { limite = nuevolimite; }
void Producto::setFecha_Ingresada(Fecha* nuevaFecha) { fechaPtr = nuevaFecha; }


double Producto::obtenerPorcentajeGanancia() const{
	return this->getPrecio_Costo() * cat->porceGanancia(this->categoria);
}