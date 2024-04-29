#pragma once
#include "Fecha.h"
#include "Categoria.h"

using namespace std;

class Producto {
protected:
	string codigo;
	string nombre_Comercial;
	string descripcion;
	double precio_Costo;
	string categoria;
	int existencia;
	int limite;
	// Asociacion a Fecha
	Fecha* fechaPtr;
	Categoria* cat; // Inicio de Relacion de Uso para el metodo porceGanancia...
public:
	Producto();
	Producto(string, string, string, double, int, int, Fecha*);

	virtual ~Producto();

	virtual string getCodigo() = 0;
	virtual string getNombre_Comercial() = 0;
	virtual double getPrecio_Costo() const = 0;
	virtual string getCategoria() = 0;
	virtual int getExistencia() = 0;
	virtual int getLimite() = 0;
	virtual string getDescripcion() = 0;
	virtual Fecha* getFecha_Ingresada() = 0;

	virtual void setCodigo(string) = 0;
	virtual void setNombre_Comercial(string) = 0;
	virtual void setDescripcion(string) = 0;
	virtual void setPrecio_costo(double) = 0;
	virtual void setCategoria(string) = 0;
	virtual void setExistencia(int) = 0;
	virtual void setLimite(int) = 0;
	virtual void setFecha_Ingresada(Fecha*) = 0;

	virtual double obtenerPorcentajeGanancia() const = 0;

	virtual string toString() const = 0;

	// Sobrecarga de Operador de Igualdad...
	/*bool operator == (const Producto& obj2) {
		return this->categoria == obj2.categoria;
	}*/

	// Sobrecarga de Operador No Miembro de Salida de datos...
	/* virtual friend ostream& operator << (ostream& sal, const Producto& obj) = 0; */


};