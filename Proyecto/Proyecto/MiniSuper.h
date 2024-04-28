#include "Producto.h"
#include "Conserva.h"
#include "Fecha.h"
#include "ProductoPerecedero.h"
#include "Perecedero.h"
#include "Abarrote.h"
#include "Factura.h"
// INCLUDE DEL PATRON DECORADOR
#include "Compra.h"
#include "Carrito.h"
#include "ProductoAbs.h"
#include "DecAbarrote.h"
#include "DecConserva.h"
#include "DecEmbutido.h"

// INCLUDE DE VENTAS y CLIENTE
#include "Venta.h"
#include "Cliente.h"

// INCLUDE DE LISTA GENERICA	
#include "ContenedorT.h"


class MiniSuper {
private:
	ContenedorT<Producto>* listaProd;
	ContenedorT<Venta>* listaVenta;
public:
	MiniSuper();
	virtual ~MiniSuper();
	int getCantidadProductos();
	int getCantidadVentas();
	
	void ingresaVenta(Venta*);

	void ingresaProducto(Producto*);

	string getListaProd();
	string getProdCate(string);
	string getListaFacturas(string);
	string getProdMenorLimit();
};