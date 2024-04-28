#include "Embutido.h"

Embutido::Embutido(string cod, string nomC, string des, double preC, int ex, int lim, Fecha* fecha, bool nac, double pes, Perecedero* vence, string nomA, string parteAnimal, string marc, Empaque* empPtr) : 
	Carne(cod,nomC,des,preC,ex,lim,fecha,nac,pes,vence,nomA,parteAnimal), marca(marc), empaquePtr(empPtr)
{ 
	categoria = "Categoria #3";
}
Embutido::~Embutido() {
	if (empaquePtr) delete empaquePtr;
}

void Embutido::setMarca(string nuevaMarca) { marca = nuevaMarca; }
void Embutido::setEmpaque(Empaque* nuevoEmpaque) { empaquePtr = nuevoEmpaque; }


string Embutido::getMarca() { return marca; }
Empaque* Embutido::getEmpaque() { return  empaquePtr; }

string Embutido::esNacional() {
	if (nacional) return " Si";
	else return " No";
}

string Embutido::toString() {
	stringstream salida;
	salida << "============== PRODUCTO CARNE ================" << endl
		<< "Codigo            : " << codigo << endl
		<< "Nombre Comercial  : " << nombre_Comercial << endl
		<< "Descripcion       : " << descripcion << endl
		<< "Precio Costo      : " << precio_Costo << endl
		<< "Categoria         : " << categoria << endl
		<< "Existencias       : " << existencia << endl
		<< "Limite Existencias: " << limite << endl
		<< "Fecha de Ingreso  : " << fechaPtr->mostrar_Fecha() << endl
		<< "Producto Nacional : " << esNacional() << endl
		<< "Peso              : " << peso << endl
		<< "Vence             : " << vencimiento->Vence() << endl
		<< "Nombre de Marca   : " << marca << endl
		<< "Tipo de Empaque   : " << empaquePtr->esTripa() << endl
		<< "================================================" << endl;

	return salida.str();

}