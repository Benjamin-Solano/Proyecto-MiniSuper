#include "Conserva.h"


Conserva::Conserva(string cod, string nomC, string des, double preC, int ex, int lim, Fecha* fecha, bool env) : Producto(cod,nomC,des,preC,ex,lim,fecha), envasado(env) { 
	categoria = "Categoria #1";
}

void Conserva::setEnvasado(bool CambiarEnvasado) { envasado = CambiarEnvasado; }
bool Conserva::getEnvasado() { return envasado; }

string Conserva::getCodigo() { return codigo; }
string Conserva::getNombre_Comercial() { return nombre_Comercial; }
string Conserva::getDescripcion() { return descripcion; }
double Conserva::getPrecio_Costo() const { return precio_Costo; }
string Conserva::getCategoria() { return categoria; }
int Conserva::getExistencia() { return existencia; }
int Conserva::getLimite() { return limite; }
Fecha* Conserva::getFecha_Ingresada() { return fechaPtr; }

void Conserva::setCodigo(string nuevoCodigo) { codigo = nuevoCodigo; }
void Conserva::setNombre_Comercial(string nuevoNombre) { nombre_Comercial = nuevoNombre; }
void Conserva::setDescripcion(string nuevaDescripcion) { descripcion = nuevaDescripcion; }
void Conserva::setPrecio_costo(double nuevoPrecio) { precio_Costo = nuevoPrecio; }
void Conserva::setCategoria(string nuevaCategoria) { categoria = nuevaCategoria; }
void Conserva::setExistencia(int nuevaExistencia) { existencia = nuevaExistencia; }
void Conserva::setLimite(int nuevolimite) { limite = nuevolimite; }
void Conserva::setFecha_Ingresada(Fecha* nuevaFecha) { fechaPtr = nuevaFecha; }

double Conserva::obtenerPorcentajeGanancia() const {
	return this->getPrecio_Costo() * cat->porceGanancia(this->categoria);
}

string Conserva::toString() const {
	stringstream salida;
	salida << "=========== Conserva Conserva ===========" << endl
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