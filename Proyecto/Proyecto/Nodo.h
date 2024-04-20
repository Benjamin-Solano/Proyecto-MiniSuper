#pragma once
#include<iostream>

template<class T>
class Nodo {
private:
	Nodo* sig;
	T* info;
public:
	Nodo(T*,Nodo<T>*);
	virtual ~Nodo();
	Nodo<T>* getSigNodo();
	T* obtenerInfo();
	void setInfo(T*);
	void setSiguiente(Nodo<T>*);
};

template<class T>
Nodo<T>::Nodo(T* in,Nodo<T>* sig) : sig(sig), info(in) {}

template<class T>
Nodo<T>::~Nodo() {
	if (info != NULL)
		delete info;
	delete sig;
}

template<class T>
Nodo<T>* Nodo<T>::getSigNodo() {
	return sig;
}

template<class T>
T* Nodo<T>::obtenerInfo() {
	return info;
}

template<class T>
void Nodo<T>::setInfo(T* e) {
	info = e;
}

template<class T>
void Nodo<T>::setSiguiente(Nodo<T>* sigObject) {
	sig = sigObject;
}
