#pragma once
#include "ProductoAbs.h"
#include "Abarrote.h"

class DecAbarrote : public ProductoAbs {
private:
	Abarrote* ptrAbarrote;
public:
	// Constructor y Destructor...
	DecAbarrote(Compra*, Abarrote*);
	virtual ~DecAbarrote();
	// Get y Set de emergencia...
	Abarrote* getAbarrote();
	void setAbarrote(Abarrote* nuevoAbarrote);
	// Metodos que interezan de la relacion de USO
	string Obtener_Nombre();
	double Obtener_Costo();
	string Obtener_Codigo();

	virtual string toString();


};