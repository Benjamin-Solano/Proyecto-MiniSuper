#include "Vista.h"

int Vista::menuPrincipal()
{
    int op = 0;
    cout << "============== MENU PRINCIPAL ==============" << endl;
    cout << "[1] Mantenimiento" << endl;
    cout << "[2] Ventas" << endl;
    cout << "[3] Reportes" << endl;
    cout << "[4] Salir" << endl;
    cout << "Seleccione una opcion...";
    cin >> op;
    return op;
}

int Vista::menuMantenimiento()
{
    int opM = 0;
    cout << "============= MENU MANTENIMIENTO ===========" << endl;
    cout << "[1] Ingreso Producto" << endl;
    cout << "[2] Eliminacion Producto por codigo o nombre comercial" << endl;
    cout << "[3] Actualizacion de Producto por su codigo o nombre comercial" << endl;
    cout << "[4] Salir" << endl;
    cout << "Seleccione una opcion... ";
    cin >> opM;
    return opM;
}

int Vista::ingresoProducto()
{
    int inProd = 0;
    cout << "======== INGRESO DE PRODUCTO ========" << endl;
    cout << "[1] Tipo Conserva" << endl;
    cout << "[2] Tipo Abarrote" << endl;
    cout << "[3] Tipo Embutido" << endl;
    cout << "[4] Salir" << endl;
    cout << "Seleccione una opcion...";
    cin >> inProd;
    return inProd;
}

void Vista::ElimProd(ContenedorT<Producto>& c)
{
    string cod = "";
    cout << "======== ELIMINACION DE PRODUCTO ========" << endl;
    cout << "Digite el codigo del producto: "; cin >> cod;
    // c.EliminarProducto(cod);

}

void Vista::ActuProd(ContenedorT<Producto>& c)
{
    string cod = "";
    cout << "======== ACTUALIZACION DE PRODUCTO ========" << endl;
    cout << "Digite el codigo del producto: "; cin >> cod;
    // c.ActualizarProcto
}

Producto* Vista::ingresoConserva()
{
    string cod, nC, d,cat;
    double pre;
    bool e;
    int exist, limt;
    Fecha* f = new Fecha(28, 4, 2024);
    cout << "Ingresando Producto del tipo Conserva....." << endl;
    cout << "Ingrese el codigo del producto: "; cin >> cod;
    cout << "Ingrese el nombre comercial: "; cin >> nC;
    cout << "Ingrese la descripcion de este: "; cin >> d;
    cout << "Ingrese el precio: "; cin >> pre;
    cout << "Digite su existencia: "; cin >> exist;
    cout << "Digite su limite: "; cin >> limt;
    cout << "Esta embasado: " << endl;
    cout << "Si = 1 || No = 0" << endl; 
    cin >> e;
    Producto* p = new Conserva(cod, nC, d, pre, exist, limt, f, e);
    return p;
}

Producto* Vista::ingresoAbarrote()
{
    return NULL;
}

Producto* Vista::ingresoEmbutido()
{
    return NULL;
}

void Vista::menuVenta(ContenedorT<Venta> v)
{
    string ced = "";
    string cod = "";
    int cant = 0;
    int opVe = 0;
    cout << "==== GENERANDO UNA FACTURA ====" << endl;
    cout << "Digite la cedula del cliente: "; cin >> ced;
    cout << "Digite codigo del producto: "; cin >> cod;
    cout << "Digite la cantidad del producto: "; cin >> cant;
    cout << "=========== FACTURA ===========" << endl;
    
   
}

void Vista::crearFactura()
{
}

int Vista::menuReportes()
{
    int opR = 0;
    cout << "============== MENU PRINCIPAL ==============" << endl;
    cout << "[1] Reportar todos los productos del minisuper" << endl;
    cout << "[2] Reportar solo los productos de una determinada categoria" << endl;
    cout << "[3] Reportar solo los productos que está por debajo del mínimo de su existencia" << endl;
    cout << "[4] Reportar las facturas de un tedterminado cliente por su cedula" << endl;
    cout << "[5] Reportar las cedulas de los 5 mejores clientes que compran en el minisuper" << endl;
    cout << "[6] Salir " << endl;
    cout << "Seleccione una opcion... ";
    cin >> opR;
    return opR;
}

void Vista::despedida()
{
    cout << "-----------------------> CREADORES <----------------------" << endl;
    cout << "Benjamin ...." << endl;
    cout << "Lesber...." << endl;
    cout << "-----------------> GRACIAS POR UTILIZAR <-----------------" << endl;
}
