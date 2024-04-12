#pragma once
#include "ProductoPerecedero.h"



Producto_Perecedero::Producto_Perecedero(string cod, string nomC, string des, double preC, int ex, int lim, Fecha* fecha, bool nac, double pes, Perecedero* vence) : Producto(cod, nomC, des, preC, ex, lim, fecha), nacional(nac), peso(pes), vencimiento(vence) {
	categoria = "???";
}
Producto_Perecedero:: ~Producto_Perecedero() { if (vencimiento) delete vencimiento; }

bool Producto_Perecedero::getNacional() { return nacional; }
double Producto_Perecedero::getPeso() { return peso; }
Perecedero* Producto_Perecedero::getFechaVencimiento() { return vencimiento; }


void Producto_Perecedero::setNacional(bool nuevoNacional) { nacional = nuevoNacional; }
void Producto_Perecedero::setPeso(double nuevoPeso) { peso = nuevoPeso; }
void Producto_Perecedero::setFechaVencimiento(Perecedero* nuevoVencimiento) { vencimiento = nuevoVencimiento; }