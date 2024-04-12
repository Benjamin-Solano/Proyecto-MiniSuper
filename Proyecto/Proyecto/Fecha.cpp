#include "Fecha.h"

Fecha::Fecha(){
	dia = 0;
	mes = 0;
	anio = 0;
}
Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}
Fecha:: ~Fecha(){}

void Fecha::setDia(int nuevoDia) { dia = nuevoDia; }
void Fecha::setMes(int nuevoMes) { mes = nuevoMes; }
void Fecha::setAnio(int nuevoAnio) { anio = nuevoAnio; }

int Fecha::getDia() { return dia; }
int Fecha::getMes() { return mes; }
int Fecha::getAnio() { return anio; }


string Fecha::mostrar_Fecha(){
	stringstream salida;
	salida << dia << "/" << mes << "/" << anio;
	return salida.str();
}