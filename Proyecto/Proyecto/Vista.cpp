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
    cout << "[1] Facturas" << endl;
    cout << "[2] Productos" << endl;
    cout << "[3] Salir" << endl;
    cout << "Seleccione una opcion...";
    cin >> opM;
    return opM;
}

int Vista::facturas()
{
    int opFac = 0;
    cout << "======== FACTURAS ========" << endl;
    cout << "[1] Eliminar Factura" << endl;
    cout << "[2] Actualizar Factura" << endl;
    cout << "[3] Salir" << endl;
    cout << "Seleccione una opcion...";
    cin >> opFac;
    return opFac;
}

int Vista::productos()
{
    int opProd = 0;
    cout << "======== PRODUCTOS ========" << endl;
    cout << "[1] Eliminar Factura" << endl;
    cout << "[2] Actualizar Factura" << endl;
    cout << "[3] Salir" << endl;
    cout << "Seleccione una opcion...";
    cin >> opProd;
    return opProd;
}

int Vista::menuVentas()
{
    int opVe = 0;
    cout << "==== FACTURAS =====" << endl;
    cout << "[1] Eliminar Factura" << endl;
    cout << "[2] Actualizar Factura" << endl;
    cout << "[3] Salir" << endl;
    cout << "Seleccione una opcion...";
    cin >> opVe;
    return opVe;
}

void Vista::crearFactura()
{
}

int Vista::menuReportes()
{
    int opR = 0;
    cout << "============== MENU PRINCIPAL ==============" << endl;
    cout << "[1] Reportar todos los productos del minisuper" << endl;
    cout << "[2] Reportar solo los productos de uana determinada categoria" << endl;
    cout << "[3] Reportar solo los productos que está por debajo del mínimo de su existencia" << endl;
    cout << "[4] Reportar las facturas de un tedterminado cliente por su cedula" << endl;
    cout << "[5] Reportar las cedulas de los 5 mejores clientes que compran en el minisuper" << endl;
    cout << "[6] Salir " << endl;
    cout << "Seleccione una opcion...";
    cin >> opR;
    return opR;
}
