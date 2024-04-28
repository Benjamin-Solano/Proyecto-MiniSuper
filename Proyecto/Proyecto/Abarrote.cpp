#include "Abarrote.h"

Abarrote::Abarrote(string cod, string nomC, string des, double preC, int exi, int lim, Fecha* fecha, bool nac, double pes, Perecedero* per, string nomE) 
	: Producto_Perecedero(cod, nomC, des, preC, exi, lim, fecha, nac, pes, per), nombreEmpresa(nomE) 
{
	categoria = "Categoria #2";
}

Abarrote:: ~Abarrote() { }

string Abarrote::getNombreEmpresa() { return nombreEmpresa; }

void Abarrote::setNombreEmpresa(string nuevoNombreEmpresa) { nombreEmpresa = nuevoNombreEmpresa; }

string Abarrote::esNacional() {
	if (nacional) return " Si";
	else return " No";
}

string Abarrote::toString(){
	stringstream salida;
	salida << "======== PRODUCTO ABARROTE PERECEDERO ========" << endl
		<< "Codigo            : " << codigo << endl
		<< "Nombre Comercial  : " << nombre_Comercial << endl
		<< "Descripcion       : " << descripcion << endl
		<< "Precio Costo      : " << precio_Costo << endl
		<< "Categoria         : " << categoria << endl
		<< "Existencias       : " << existencia << endl
		<< "Limite Existencias: " << limite << endl
		<< "Fecha de Ingreso  : " << fechaPtr->mostrar_Fecha() << endl
		<< "Producto Nacional : " << this->esNacional() << endl
		<< "Peso              : " << peso << endl
		<< "Vence             : " << vencimiento->Vence() << endl
		<< "Nombre de Empresa : " << nombreEmpresa << endl
		<< "==============================================" << endl;
	return salida.str();
}