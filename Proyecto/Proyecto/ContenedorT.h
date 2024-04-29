#pragma once
#include"Nodo.h"
#include<sstream>
using namespace std;

template<class T>
class ContenedorT {
private:
	Nodo<T>* primerNodo;
public:
	ContenedorT();
	ContenedorT(const ContenedorT&);
	virtual ~ContenedorT();
	bool eliminarTodo();
	bool isEmpty();
	int size();
	void agregarInicio(T*);
	void ingresaElemento(T*);
	string display() const;
	string mostrarMejoresVentas();
	string mostrarProductosDeCategoria(string);
	void ordenar_Lista_Mayor_A_Menor();
	string facturasClientePorCed(string);
	string productosMenorALim();
	Nodo<T>* getValor(string);
	bool eliminarProd(string);

	friend ostream& operator << (ostream& out, const ContenedorT<T>& c) {
		Nodo<T>* act = c.primerNodo;
		int i = 1;
		while (act != nullptr) {
			out << i << "-  " << *act->obtenerInfo();
			out	<< "--------------------------------" << endl;
			act = act->getSig();
			i++;
		}
		return out;
	}
	// no sé si se terminará de ocupar
	/*friend bool operator == (string cat, ContenedorT<T> c) {
		Nodo<T>* aux = c.primerNodo;
		return aux->obtenerInfo->getCategoria() == cat;
	}*/
};


template<class T>
ContenedorT<T>::ContenedorT() : primerNodo(nullptr) {}

template<class T>
ContenedorT<T>::ContenedorT(const ContenedorT& list) {
	primerNodo = nullptr;
	Nodo<T>* pAct = list.primerNodo;  
	while (pAct) {
		this->agregarFinal(pAct->obtenerInfo());
			pAct = pAct->getSiguiente();
	}
}

template<class T>
inline ContenedorT<T>::~ContenedorT()
{
	if(this->isEmpty())	this->eliminarTodo();
}

template<class T>
inline bool ContenedorT<T>::eliminarTodo()
{
	Nodo<T>* act = primerNodo;
	while (act != nullptr) {
		primerNodo = primerNodo->getSigNodo();
		delete act;
		act = primerNodo;
	}
	delete primerNodo;
	return true;
}

template<class T>
bool ContenedorT<T>::isEmpty() { return primerNodo == nullptr; }

template<class T>
int ContenedorT<T>::size() {
	Nodo<T>* pAct = primerNodo;
	int cont = 0;
	while (pAct) {
		pAct = pAct->getSigNodo();
		cont++;
	}
	return cont;
}


template<class T>
void ContenedorT<T>::agregarInicio(T* info) {
	T* info1 = info;
	primerNodo = new Nodo<T>(info1, primerNodo); 
}

template<class T>
void ContenedorT<T>::ingresaElemento(T* info) {
	T* info1 = info;
	Nodo<T>* nuevo = new Nodo<T>(info1,nullptr);
	if (this->isEmpty()) {
		this->agregarInicio(info);
	}
	else {
		Nodo<T>* pAct = primerNodo;
		while (pAct->getSigNodo() != nullptr) {
			pAct = pAct->getSigNodo();
		}
		pAct->setSiguiente(nuevo);
	}
}

template<class T>
string ContenedorT<T>::display() const {
	stringstream s;
	Nodo<T>* pAct = primerNodo;
	while (pAct != nullptr) {
		s << pAct->obtenerInfo()->toString();
		pAct = pAct->getSigNodo();
	}
	return s.str();
}


// Metodos para mostrar mejores ventas...

template<class T>
void ContenedorT<T>::ordenar_Lista_Mayor_A_Menor() {
	// Validaciones...
	if (isEmpty()) {	return "Lista Vacia, ingrese elementos..."; }
	if (!primerNodo || !primerNodo->getSigNodo()) { return; }
	
	// Metodo 
	Nodo<T>* exo = primerNodo;
	while (exo->getSigNodo()) {
		Nodo<T>* NodoMenor = exo;
		Nodo<T>* proxNodo = exo->getSigNodo();
		while (proxNodo) {
			if (proxNodo->obtenerInfo() < NodoMenor->obtenerInfo()) { // uso de la sobrecarga de "<"
				NodoMenor = proxNodo;
			}
			proxNodo = proxNodo->getSigNodo();
		}
		// Intercambiando los datos
		T* temporal = exo->obtenerInfo;
		exo->obtenerInfo = NodoMenor->obtenerInfo();
		NodoMenor->obtenerInfo = temporal;
		exo = exo->getSigNodo();
	}
}

template<class T>
inline string ContenedorT<T>::facturasClientePorCed(string ced)
{
	stringstream s;
	Nodo<T>* exo = primerNodo;
	if (isEmpty()) {
		return "Lista vacia, no existen facturas";
	} 
	while (exo != nullptr && ced == exo->obtenerInfo()->getCliente()->getCedula()) {
		s << exo->obtenerInfo()->toString(); 
		exo = exo->getSigNodo();
	}
	return s.str();
}

template<class T>
inline string ContenedorT<T>::productosMenorALim()
{
	stringstream s;
	Nodo<T>* exo = primerNodo;
	if (isEmpty()) {
		return "Lista vacia, no existen productos";
	}
	while (exo != nullptr && exo->obtenerInfo()->getExistencia() < exo->obtenerInfo()->getLimite()) {
		s << exo->obtenerInfo()->toString();
		exo = exo->getSigNodo();
	}
	return s.str();
}

template<class T>
inline Nodo<T>* ContenedorT<T>::getValor(string c)
{
		if (isEmpty()) {
			return nullptr;
		}
		else {
			Nodo<T>* exo = primerNodo;
			while (exo != nullptr) {
				if (exo->obtenerInfo()->getCodigo() == c || exo->obtenerInfo()->getNombre_Comercial() == c) {
					return exo;
				}
				else {
					exo = exo->getSigNodo();
				}
				return exo; // Nullptr
			}
		}
		return nullptr;
}

template<class T>
inline bool ContenedorT<T>::eliminarProd(string c)
{
		Nodo<T>* exo = getValor(c);
		Nodo<T>* auxiliar = primerNodo;

		if (exo->obtenerInfo()->getCodigo() == primerNodo->obtenerInfo()->getCodigo() || exo->obtenerInfo()->getNombre_Comercial() == primerNodo->obtenerInfo()->getNombre_Comercial()) {
			primerNodo->setInfo(exo->getSigNodo()->obtenerInfo());
			delete exo;
			return true;
		}
		else {
			while (auxiliar->obtenerInfo()->getCodigo() != exo->obtenerInfo()->getCodigo() || auxiliar->obtenerInfo()->getNombre_Comercial() != exo->obtenerInfo()->getNombre_Comercial()) {
				auxiliar = auxiliar->getSigNodo();
			}
			auxiliar->setInfo(exo->getSigNodo()->obtenerInfo());
			delete exo;
			return true;
		}
		return false;
}

template<class T>
inline string ContenedorT<T>::mostrarMejoresVentas() {
	// Primero se ordena la lista...
	this->ordenar_Lista_Mayor_A_Menor();

	// limite para imprimir 5 mejores...
	int mejores = 0;

	// Nodo para recorrer la lista ordenada...
	Nodo<T>* exo = primerNodo;

	// Imprimir mejores 5
	while (exo) {
		if (mejores != 6) {  // aqui no deberia de ser mejores < 6 ?
			cout << exo->obtenerInfo()->toString() << endl;  // Uso de sobrecarga de "<<"
			mejores++;
		}
		exo = exo->getSigNodo();
	}
}

template <class T>
string ContenedorT<T>::mostrarProductosDeCategoria(string cat) {
	
	stringstream s;
	Nodo<T>* exo = primerNodo;
	if (isEmpty()) {
		return "Lista vacia";
	}
	while (exo != nullptr) {
		if (cat == exo->obtenerInfo()->getCategoria()) {
			s << exo->obtenerInfo()->toString();
		}
		exo = exo->getSigNodo();
	}
	return s.str();
}