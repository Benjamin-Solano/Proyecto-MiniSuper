#include "Conserva.h"


Conserva::Conserva(string cod, string nomC, string des, double preC, int ex, int lim, Fecha* fecha, bool env) : Producto(cod,nomC,des,preC,ex,lim,fecha), envasado(env) { 
	categoria = "Categoria #1";
}

void Conserva::setEnvasado(bool CambiarEnvasado) { envasado = CambiarEnvasado; }
bool Conserva::getEnvasado() { return envasado; }

string Conserva::toString(){
	stringstream salida;
	salida << "=========== Producto Conserva ===========" << endl
		<< "Codigo            : " << codigo << endl
		<< "Nombre Comercial  : " << nombre_Comercial << endl
		<< "Descripcion       : " << descripcion << endl
		<< "Precio Costo      : " << precio_Costo << endl
		<< "Categoria         : " << categoria << endl
		<< "Existencias       : " << existencia << endl
		<< "Limite Existencias: " << limite << endl
		<< "Fecha de Ingreso  : " << fechaPtr->mostrar_Fecha() << endl
		<< "Porcentaje Ganancia: " << this->obtenerPorcentajeGanancia() << endl
		<< "========================================" << endl;
		return salida.str();
}