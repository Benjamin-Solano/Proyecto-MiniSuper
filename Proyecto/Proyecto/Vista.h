#pragma once
#include<iostream>
using namespace std;

class Vista {
public:
	// Principal
	static int menuPrincipal();

	// Mantenimiento
	static int menuMantenimiento();
	static int facturas();
	static int productos();
	// Ventas
	static int menuVentas();
	static void crearFactura();
	// Reportes 
	static int menuReportes();

};