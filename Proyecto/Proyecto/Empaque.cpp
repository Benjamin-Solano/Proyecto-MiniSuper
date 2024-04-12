#include "Empaque.h"

Empaque::Empaque(bool tri) { tripa = tri; }
Empaque::~Empaque(){ }

void Empaque::setTripa(bool cambioTripa) { tripa = cambioTripa; }
bool Empaque::getTripa() { return tripa; }

string Empaque::esTripa() { 
	if (tripa) return  "Tipo de empaque: tripa";
	else return "Tipo de empaque: otro";
}