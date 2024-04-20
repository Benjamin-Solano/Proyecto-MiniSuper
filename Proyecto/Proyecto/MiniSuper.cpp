#include "MiniSuper.h"

MiniSuper::MiniSuper()
{
    listaVenta = new ContenedorT<Venta>();
    listaProd = new ContenedorT<Producto>();
}

MiniSuper::~MiniSuper()
{
    if (listaVenta) delete listaVenta;
    if (listaProd) delete listaProd;
}

int MiniSuper::getCantidadProductos()
{
    return listaProd->size();
}

int MiniSuper::getCantidadVentas()
{
    return listaVenta->size();
}

void MiniSuper::ingresaVenta(Venta* v)
{
    listaVenta->ingresaElemento(v);
}

void MiniSuper::ingresaProducto(Producto*)
{
}
