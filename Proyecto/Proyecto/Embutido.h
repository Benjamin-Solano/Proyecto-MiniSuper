#pragma once
#include "Carne.h"
#include "Empaque.h"

class Embutido : public Carne {
private:
	string marca;
	Empaque* empaquePtr;
public:
	Embutido(string, string, string, double, int, int, Fecha*, bool, double, Perecedero*, string, string, string, Empaque*);
	virtual ~Embutido();

	void setMarca(string);
	void setEmpaque(Empaque*);

	string esNacional() const;

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

	string getMarca();
	Empaque* getEmpaque();

	string toString() const;

	// Sobrecarga de Operador No Miembro de Salida de datos...
	/*virtual friend ostream& operator << (ostream& sal, const Producto& obj) {
		sal << obj.toString() << endl;
		return sal;
	}*/
};