#pragma once
#include "Categoria.h"

double Categoria :: porceGanancia(string cat) {
	if (cat == "Categoria #1") return  0.15;
	if (cat == "Categoria #2") return  0.20;
	if (cat == "Categoria #3") return  0.30;
	else return -1;
}