#pragma once
#include "ProductoAbs.h"
#include "Embutido.h"

class DecEmbutido : public ProductoAbs {
private:
	Embutido* ptrEmbutido;
public:
	// Constructor y Destructor...
	DecEmbutido(Compra*, Embutido*);
	virtual ~DecEmbutido();

	// Set y Get de emergencia...
	void setEmbutido(Embutido* nuevoEmbutido);
	Embutido* getEmbutido();

	// Metodos que interesan de la relacion de uso....
	string Obtener_Nombre();
	double Obtener_Costo();
	string Obtener_Codigo();

	string toString();


};