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

void MiniSuper::ingresaProducto(Producto* p)
{
    listaProd->ingresaElemento(p);
}

void MiniSuper::eliminarProd(string c)
{
    listaProd->eliminarProd(c);
}

string MiniSuper::getListaProd()
{
    stringstream s;
    s << listaProd->display() << endl;
    return s.str();
}

string MiniSuper::getProdCate(string c)
{
    stringstream s;
    s << listaProd->mostrarProductosDeCategoria(c) << endl;
    return s.str();
}

string MiniSuper::getListaFacturas(string c)
{
    stringstream s;
    s << listaVenta->display() << endl;
    return s.str();
}

string MiniSuper::getProdMenorLimit()
{
    stringstream s;
    s << listaProd->productosMenorALim() << endl;
    return s.str();
}

void MiniSuper::actualizarProd(string cod, string nomC,string des,double precioCosto,int existencia, int lim){
    listaProd->actualizar(cod, nomC, des, precioCosto, existencia, lim); 
}
