#pragma once
#include"MiniSuper.h"

class Vista {
public:
	// Principal
	static int menuPrincipal();

	// Mantenimiento
	static int menuMantenimiento();
	static int ingresoProducto();
	static void ElimProd(MiniSuper&);
	static void ActuProd(MiniSuper&);
	static Producto* ingresoConserva();
	static Producto* ingresoAbarrote();
	static Producto* ingresoEmbutido();

	// Ventas
	static void menuVenta(MiniSuper&);
	// Reportes 
	static int menuReportes();
	static void muestraListaProd(MiniSuper&);
	static void muestraProdCategoria(MiniSuper&);
	static void prodMinimosExist(MiniSuper&);
	static void facturasCliente(MiniSuper&);
	static void reporteMejoresClientes(MiniSuper&);
	// Despedida 
	static void despedida();

};