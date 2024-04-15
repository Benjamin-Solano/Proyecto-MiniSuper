#include "Cliente.h"

// Constructores y destructor...
Cliente::Cliente() : nombre(" "), cedula(" ") {}
Cliente::Cliente(string nom, string ced) : nombre(nom), cedula(ced) {}

Cliente:: ~Cliente(){ }


// Set y Get provicionales...
string Cliente::getNombre() { return nombre; }
string Cliente::getCedula() { return cedula; }

void Cliente::setCedula(string nuevoNombre) { nombre = nuevoNombre; }
void Cliente::setNombre(string nuevaCedula) { cedula = nuevaCedula; }

