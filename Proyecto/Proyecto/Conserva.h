#pragma once
#include "Producto.h"

class Conserva : public Producto {
private:
	bool envasado;
public:
	Conserva(string, string, string, double, int, int, Fecha*, bool);

	void setEnvasado(bool);
	bool getEnvasado();

	virtual string getCodigo();
	virtual string getNombre_Comercial();
	virtual double getPrecio_Costo() const;
	virtual string getCategoria();
	virtual int getExistencia();
	virtual int getLimite();
	virtual string getDescripcion();
	virtual Fecha* getFecha_Ingresada();

	virtual void setCodigo(string);
	virtual void setNombre_Comercial(string);
	virtual void setDescripcion(string);
	virtual void setPrecio_costo(double);
	virtual void setCategoria(string);
	virtual void setExistencia(int);
	virtual void setLimite(int);
	virtual void setFecha_Ingresada(Fecha*);
	virtual double obtenerPorcentajeGanancia() const;

	string toString() const ;

	// Sobrecarga de Operador No Miembro de Salida de datos...

	/*virtual friend ostream& operator << (ostream& sal, const Producto& obj) {
		sal << obj.toString() << endl;
		return sal;
	}*/

};