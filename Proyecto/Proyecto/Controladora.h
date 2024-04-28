#pragma once
#include"Vista.h"

class Controladora {
private:
	// Principal
	MiniSuper* miniS;

	// Punteros
	Fecha* fecha;
	Producto* producto;

public:
	Controladora();
	virtual ~Controladora();

	// Control general
	void control0();

	// Control Mantenimiento
	void controlMantenimiento();
	void controlMantenimiento1();
	void controlMantenimiento2();
	void controlMantenimiento3();

	// Ingresa productos
	void ingresaConserva();
	void ingresaAbarrote();
	void ingresaEmbutido();
	

	// Control Venta
	void controlVenta();
	// Control Reportes
	void controlReportes();
	void controlReportes1();
	void controlReportes2();
	void controlReportes3();
	void controlReportes4();
	void controlReportes5();

	void despedida();
};

