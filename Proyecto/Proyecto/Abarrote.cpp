#include "Abarrote.h"

Abarrote::Abarrote(string cod, string nomC, string des, double preC, int exi, int lim, Fecha* fecha, bool nac, double pes, Perecedero* per, string nomE) 
	: Producto_Perecedero(cod, nomC, des, preC, exi, lim, fecha, nac, pes, per), nombreEmpresa(nomE) 
{
	categoria = "Categoria #2";
}

Abarrote:: ~Abarrote() { }

string Abarrote::getNombreEmpresa() { return nombreEmpresa; }

void Abarrote::setNombreEmpresa(string nuevoNombreEmpresa) { nombreEmpresa = nuevoNombreEmpresa; }

string Abarrote::esNacional() const {
	if (nacional) return " Si";
	else return " No";
}
string Abarrote::getCodigo() { return codigo; }
string Abarrote::getNombre_Comercial() { return nombre_Comercial; }
string Abarrote::getDescripcion() { return descripcion; }
double Abarrote::getPrecio_Costo() const { return precio_Costo; }
string Abarrote::getCategoria() { return categoria; }
int Abarrote::getExistencia() { return existencia; }
int Abarrote::getLimite() { return limite; }
Fecha* Abarrote::getFecha_Ingresada() { return fechaPtr; }

void Abarrote::setCodigo(string nuevoCodigo) { codigo = nuevoCodigo; }
void Abarrote::setNombre_Comercial(string nuevoNombre) { nombre_Comercial = nuevoNombre; }
void Abarrote::setDescripcion(string nuevaDescripcion) { descripcion = nuevaDescripcion; }
void Abarrote::setPrecio_costo(double nuevoPrecio) { precio_Costo = nuevoPrecio; }
void Abarrote::setCategoria(string nuevaCategoria) { categoria = nuevaCategoria; }
void Abarrote::setExistencia(int nuevaExistencia) { existencia = nuevaExistencia; }
void Abarrote::setLimite(int nuevolimite) { limite = nuevolimite; }
void Abarrote::setFecha_Ingresada(Fecha* nuevaFecha) { fechaPtr = nuevaFecha; }

double Abarrote::obtenerPorcentajeGanancia() const {
	return this->getPrecio_Costo() * cat->porceGanancia(this->categoria);
}

string Abarrote::toString() const {
	stringstream salida;
	salida << "======== Abarrote ABARROTE PERECEDERO ========" << endl
		<< "Codigo            : " << codigo << endl
		<< "Nombre Comercial  : " << nombre_Comercial << endl
		<< "Descripcion       : " << descripcion << endl
		<< "Precio Costo      : " << precio_Costo << endl
		<< "Porcentaje Ganancia: " << this->obtenerPorcentajeGanancia() << endl
		<< "Categoria         : " << categoria << endl
		<< "Existencias       : " << existencia << endl
		<< "Limite Existencias: " << limite << endl
		<< "Fecha de Ingreso  : " << fechaPtr->mostrar_Fecha() << endl
		<< "Abarrote Nacional : " << this->esNacional() << endl
		<< "Peso              : " << peso << endl
		<< "Vence             : " << vencimiento->Vence() << endl
		<< "Nombre de Empresa : " << nombreEmpresa << endl
		<< "==============================================" << endl;
	return salida.str();
}