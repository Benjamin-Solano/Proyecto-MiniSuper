#include "Categoria.h"

double Categoria :: porceGanancia(Producto* producto) {
	if (producto->getCategoria() == "Categoria #1") return producto->getPrecio_Costo() * 0.15;
	if (producto->getCategoria() == "Categoria #2") return producto->getPrecio_Costo() * 0.20;
	if (producto->getCategoria() == "Categoria #3") return producto->getPrecio_Costo() * 0.30;
}