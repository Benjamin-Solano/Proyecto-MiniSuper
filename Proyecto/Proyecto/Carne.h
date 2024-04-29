#pragma once
#include "ProductoPerecedero.h"

class Carne : public Producto_Perecedero {
protected:
	string nombre_Animal;
	string parte_del_Animal;
public:
	Carne(string, string, string, double, int, int, Fecha*, bool, double, Perecedero*, string, string);
	virtual ~Carne();

	void setNombreAnimal(string);
	void setParte_Del_Animal(string);

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

	string getNombreAnimal();
	string getParteDelAnimal();

	virtual string toString() const = 0;
};