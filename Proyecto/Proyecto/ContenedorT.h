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

	void ordenar_Lista_Mayor_A_Menor();

	friend ostream& operator << (ostream& out, const ContenedorT<T>& c) {
		Nodo<T>* act = c.primerNodo;
		int i = 1;
		while (act != NULL) {
			out << i << "-  " << *act->obtenerInfo();
			out	<< "--------------------------------" << endl;
			act = act->getSig();
			i++;
		}
		return out;
	}
};


template<class T>
ContenedorT<T>::ContenedorT() : primerNodo(NULL) {}

template<class T>
ContenedorT<T>::ContenedorT(const ContenedorT& list) {
	primerNodo = NULL;
	Nodo<T>* pAct = list.primerNodo;  
	while (pAct) {
		this->agregarFinal(pAct->obtenerInfo());
			pAct = pAct->getSiguiente();
	}
}

template<class T>
inline ContenedorT<T>::~ContenedorT()
{
	this->eliminarTodo();
}

template<class T>
inline bool ContenedorT<T>::eliminarTodo()
{
	Nodo<T>* act = primerNodo;
	while (act != NULL) {
		primerNodo = primerNodo->getSigNodo();
		delete act;
		act = primerNodo;
	}
	delete primerNodo;
	return true;
}

template<class T>
bool ContenedorT<T>::isEmpty() { return primerNodo == NULL; }

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
	Nodo<T>* nuevo = new Nodo<T>(info1,NULL);
	if (this->isEmpty()) {
		this->agregarInicio(info);
	}
	else {
		Nodo<T>* pAct = primerNodo;
		while (pAct->getSigNodo() != NULL) {
			pAct = pAct->getSigNodo();
		}
		pAct->setSiguiente(nuevo);
	}
}

template<class T>
string ContenedorT<T>::display() const {
	stringstream s;
	Nodo<T>* pAct = primerNodo;
	while (pAct != NULL) {
		s << pAct->obtenerInfo()->toString();
		pAct = pAct->getSigNodo();
	}
	return s.str();
}

template<class T>
void ContenedorT<T>::ordenar_Lista_Mayor_A_Menor() {
	// Validaciones...
	if (isEmpty) {	return "Lista Vacia, ingrese elementos..."; }
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
inline string ContenedorT<T>::mostrarMejoresVentas() {
	stringstream salida;
	// Primero se ordena la lista...
	this->ordenar_Lista_Mayor_A_Menor();

	// limite para imprimir 5 mejores...
	int mejores = 0;

	// Nodo para recorrer la lista ordenada...
	Nodo<T>* exo = primerNodo;

	// Imprimir mejores 5
	while (exo) {
		if (mejores != 6) {
			salida << exo->obtenerInfo() << endl;  // Uso de sobrecarga de "<<"
			mejores++;
		}
		exo = exo->getSigNodo();
	}

	return salida.str();
}
