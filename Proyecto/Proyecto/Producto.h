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

	string getCodigo();
	string getNombre_Comercial();
	string getDescripcion();
	double getPrecio_Costo();
	string getCategoria();
	int getExistencia();
	int getLimite();
	Fecha* getFecha_Ingresada();

	void setCodigo(string);
	void setNombre_Comercial(string);
	void setDescripcion(string);
	void setPrecio_costo(double);
	void setCategoria(string);
	void setExistencia(int);
	void setLimite(int);
	void setFecha_Ingresada(Fecha*);

	double obtenerPorcentajeGanancia();

	virtual string toString() = 0;

};