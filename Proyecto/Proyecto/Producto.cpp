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