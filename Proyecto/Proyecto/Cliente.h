#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Cliente {
private:
	string nombre;
	string cedula;
public:
	Cliente();
	Cliente(string, string);

	virtual ~Cliente();

	string getNombre();
	string getCedula();

	void setCedula(string);
	void setNombre(string);

	// Operador sobrecargado de Salida de datos... por si acaso...
	friend ostream& operator << (ostream& sal, const Cliente& obj) {
		sal << "Cliente: " << obj.nombre << "| ID: " << obj.cedula;
		return sal;
	}
};