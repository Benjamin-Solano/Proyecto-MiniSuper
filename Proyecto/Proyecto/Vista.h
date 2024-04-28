#pragma once
#include"MiniSuper.h"

class Vista {
public:
	// Principal
	static int menuPrincipal();

	// Mantenimiento
	static int menuMantenimiento();
	static int ingresoProducto();
	static void ElimProd(ContenedorT<Producto>&);
	static void ActuProd(ContenedorT<Producto>& c);
	static Producto* ingresoConserva();
	static Producto* ingresoAbarrote();
	static Producto* ingresoEmbutido();
	// Ventas
	static void menuVenta(ContenedorT<Venta>);
	static void crearFactura();
	// Reportes 
	static int menuReportes();

	// Despedida 
	static void despedida();

};