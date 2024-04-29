#pragma once
#include "Producto.h"
#include "Perecedero.h"

class Producto_Perecedero : public Producto {
protected:
	bool nacional;
	double peso;
	// Chip de fecha de vencimiento (class perecedero)
	Perecedero* vencimiento;
public:
	Producto_Perecedero(string, string, string, double, int, int, Fecha*, bool, double, Perecedero*);
	virtual ~Producto_Perecedero();

	bool getNacional();
	double getPeso();
	Perecedero* getFechaVencimiento();


	void setNacional(bool);
	void setPeso(double);
	void setFechaVencimiento(Perecedero*);

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

	// Sobrecarga de Operador No Miembro de Salida de datos...
	/*virtual friend ostream& operator << (ostream& sal, const Producto& obj) {
		sal << obj.toString() << endl;
		return sal;
	}*/
};