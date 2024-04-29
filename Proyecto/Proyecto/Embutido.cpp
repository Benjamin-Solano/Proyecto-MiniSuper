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

string Embutido::esNacional() const {
	if (nacional) return " Si";
	else return " No";
}

string Embutido::getCodigo() { return codigo; }
string Embutido::getNombre_Comercial() { return nombre_Comercial; }
string Embutido::getDescripcion() { return descripcion; }
double Embutido::getPrecio_Costo() const { return precio_Costo; }
string Embutido::getCategoria() { return categoria; }
int Embutido::getExistencia() { return existencia; }
int Embutido::getLimite() { return limite; }
Fecha* Embutido::getFecha_Ingresada() { return fechaPtr; }

void Embutido::setCodigo(string nuevoCodigo) { codigo = nuevoCodigo; }
void Embutido::setNombre_Comercial(string nuevoNombre) { nombre_Comercial = nuevoNombre; }
void Embutido::setDescripcion(string nuevaDescripcion) { descripcion = nuevaDescripcion; }
void Embutido::setPrecio_costo(double nuevoPrecio) { precio_Costo = nuevoPrecio; }
void Embutido::setCategoria(string nuevaCategoria) { categoria = nuevaCategoria; }
void Embutido::setExistencia(int nuevaExistencia) { existencia = nuevaExistencia; }
void Embutido::setLimite(int nuevolimite) { limite = nuevolimite; }
void Embutido::setFecha_Ingresada(Fecha* nuevaFecha) { fechaPtr = nuevaFecha; }

double Embutido::obtenerPorcentajeGanancia() const {
	return this->getPrecio_Costo() * cat->porceGanancia(this->categoria);
}

string Embutido::toString() const {
	stringstream salida;
	salida << "============== Embutido CARNE ================" << endl
		<< "Codigo            : " << codigo << endl
		<< "Nombre Comercial  : " << nombre_Comercial << endl
		<< "Descripcion       : " << descripcion << endl
		<< "Precio Costo      : " << precio_Costo << endl
		<< "Porcentaje Ganancia: " << this->obtenerPorcentajeGanancia() << endl
		<< "Categoria         : " << categoria << endl
		<< "Existencias       : " << existencia << endl
		<< "Limite Existencias: " << limite << endl
		<< "Fecha de Ingreso  : " << fechaPtr->mostrar_Fecha() << endl
		<< "Embutido Nacional : " << esNacional() << endl
		<< "Peso              : " << peso << endl
		<< "Vence             : " << vencimiento->Vence() << endl
		<< "Nombre de Marca   : " << marca << endl
		<< "Tipo de Empaque   : " << empaquePtr->esTripa() << endl
		<< "================================================" << endl;

	return salida.str();

}