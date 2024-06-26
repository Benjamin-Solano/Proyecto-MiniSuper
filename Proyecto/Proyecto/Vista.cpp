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

void Vista::ElimProd(MiniSuper& m)
{
    string cod = "";
    cout << "======== ELIMINACION DE PRODUCTO ========" << endl;
    cout << "Digite el codigo / nombre comercial, del producto : "; cin >> cod;
    m.eliminarProd(cod);

}

void Vista::ActuProd(MiniSuper& m)
{
    string cod = "";
    cout << "======== ACTUALIZACION DE PRODUCTO ========" << endl;
    cout << "Digite el codigo del producto: "; cin >> cod;

    string nomC, des;
    double precioCosto;
    int existencia, lim;
    cin.clear();  cin.ignore();
    cout << "Ingrese el nombre comercial   : "; getline(cin, nomC);
    cout << "Ingrese la descripcion de este: "; getline(cin, des);
    cout << "Ingrese el precio             : "; cin >> precioCosto;
    cout << "Digite su existencia          : "; cin >> existencia;
    cout << "Digite su limite              : "; cin >> lim;

    m.actualizarProd(cod,nomC,des,precioCosto,existencia,lim);
}

Producto* Vista::ingresoConserva()
{
    string cod = "", nC = "", d = "";
    double pre = 0.0;
    bool e;
    int exist = 0, limt = 0;
    // datos para fechas
    int di, mi, ai;

    cout << "//================= Ingreso de Conserva ===============//" << endl;
    cout << "Ingrese el codigo del producto: "; cin >> cod;
    cin.clear();  cin.ignore();
    cout << "Ingrese el nombre comercial   : "; getline(cin,nC);
    cout << "Ingrese la descripcion de este: "; getline(cin,d);  
    cout << "Ingrese el precio             : "; cin >> pre;
    cout << "Digite su existencia          : "; cin >> exist;
    cout << "Digite su limite              : "; cin >> limt;
    cout << "Ingrese el dia de ingreso      : "; cin >> di;
    cout << "Ingrese el mes de ingreso      : "; cin >> mi;
    cout << "Ingrese el anio de ingreso     : "; cin >> ai;
    cout << "Esta embasado? Si/1 , No/0    : "; cin >> e;
    Fecha* ingreso = new Fecha(di, mi, ai);

    return new Conserva(cod, nC, d, pre, exist, limt, ingreso, e);
}

Producto* Vista::ingresoAbarrote()
{
    // datos del objeto
    string cod = "", nomP = "", des = "", nomE = "";
    int exis = 0, lim = 0;
    double pre = 0.0, pes = 0.0;
    bool nac;

    // datos para fechas
    int di, mi, ai;
    int dv, mv, av;
    
    cout << "//================= Ingreso de Abarrote ===============//" << endl;
    cout << "Ingrese el codigo              : "; cin >> cod;
    cin.clear(); cin.ignore();
    cout << "Ingrese el nombre de producto  : "; getline(cin, nomP);  
    cout << "Ingrese la descripcion         : "; getline(cin, des);  
    cout << "Ingrese el precio base         : "; cin >> pre;
    cout << "Ingrese las existencias        : "; cin >> exis;
    cout << "Ingrese el limite de existencia: "; cin >> lim;
    cout << "Ingrese el dia de ingreso      : "; cin >> di;
    cout << "Ingrese el mes de ingreso      : "; cin >> mi;
    cout << "Ingrese el anio de ingreso     : "; cin >> ai;
    cout << "Es nacional?  Si/1 , No/0      : "; cin >> nac;
    cout << "Ingrese el dia de vencimiento  : "; cin >> dv;
    cout << "Ingrese el mes de vencimiento  : "; cin >> mv;
    cout << "Ingrese el anio de vencimiento : "; cin >> av; 
    cin.clear(); cin.ignore();
    cout << "Ingrese el nombre de empresa   : "; getline(cin, nomE);
    Fecha* ingreso = new Fecha(di, mi, ai);
    Fecha* caduca = new Fecha(dv, mv, av);
    Perecedero* vence = new Perecedero(caduca);

    return new Abarrote(cod, nomP, des, pre, exis, lim, ingreso, nac, pes, vence, nomE); 
}

Producto* Vista::ingresoEmbutido()
{
    // datos del objeto
    string cod, nomP, des, nomE, mar, nomA, parA;
    int exis, lim;
    double pre = 0.0, pes = 0.0;
    bool nac, tripa;

    // datos para fechas
    int di, mi, ai;
    int dv, mv, av;

    cout << "//================= Ingreso de Embutido ===============//" << endl;
    cout << "Ingrese el codigo              : "; cin >> cod;
    cin.clear(); cin.ignore();
    cout << "Ingrese el nombre de producto  : "; getline(cin,nomP); 
    cout << "Ingrese la descripcion         : "; getline(cin,des); 
    cout << "Ingrese el precio base         : "; cin >> pre;
    cout << "Ingrese las existencias        : "; cin >> exis; 
    cout << "Ingrese el limite de existencia: "; cin >> lim;
    cout << "Ingrese el dia de ingreso      : "; cin >> di;
    cout << "Ingrese el mes de ingreso      : "; cin >> mi;
    cout << "Ingrese el anio de ingreso     : "; cin >> ai;
    cout << "Es nacional?  Si/1 , No/0      : "; cin >> nac;
    cout << "Ingrese el dia de vencimiento  : "; cin >> dv;
    cout << "Ingrese el mes de vencimiento  : "; cin >> mv;
    cout << "Ingrese el anio de vencimiento : "; cin >> av;
    cin.clear(); cin.ignore();
    cout << "Ingrese el nombre del animal   : "; getline(cin, nomA); 
    cout << "Ingrese la parte del animal    : "; getline(cin, parA); 
    cout << "Ingrese el nombre de la marca  : "; getline(cin, mar); 
    cout << "Es de tripa el empaque? Si/1, No/0: "; cin >> tripa;

    Fecha* caduca = new Fecha(dv, mv, av);
    Perecedero* vence = new Perecedero(caduca);
    Empaque* empaque = new Empaque(tripa);
    Fecha* ingreso = new Fecha(di, mi, ai);
    return new Embutido(cod, nomP, des, pre, exis, lim, ingreso, nac, pes, vence, nomA, parA, mar, empaque);
}

// METODO INCOMPLETO... 
void Vista::menuVenta(MiniSuper& m)
{
    string ced = "";
    string nom = "";
    string cod = "";
    int dc, mc, ac;
    int op1 = 1;


    cout << "======= GENERANDO UNA FACTURA =======" << endl;
    cout << "Digite la cedula del cliente   : "; cin >> ced;
    cout << "Digite el nombre del cliente   : "; cin >> nom;
    Cliente* cliente = new Cliente(nom, ced);
    cout << "Digite el dia de compra        : "; cin >> dc;
    cout << "Digite el mes de compra        : "; cin >> mc;
    cout << "Digite el anio de compra       : "; cin >> ac;
    Fecha* fecha = new Fecha(dc, mc, ac);

    cout << "Realizar compra? Si/1 , No/0   : "; cin >> op1;
    Carrito* carrito = new Carrito();

    while (op1 == 1) {

        // Metodo incompleto....

        cout << "Ingrese el codigo del producto a comprar: "; cin >> cod;
        ProductoAbs* compra = nullptr;
        //compra->conmutar(m.getListaProd()->tomarProducto(cod));

    }

    Venta* venta = new Venta(cliente, fecha, nullptr);
    m.ingresaVenta(venta);
}

int Vista::menuReportes()
{
    int opR = 0;
    cout << "//================================ MENU REPORTES ================================//" << endl;
    cout << "[1] Reportar todos los productos del minisuper" << endl;
    cout << "[2] Reportar solo los productos de una determinada categoria" << endl;
    cout << "[3] Reportar solo los productos que est� por debajo del m�nimo de su existencia" << endl;
    cout << "[4] Reportar las facturas de un determinado cliente por su cedula" << endl;
    cout << "[5] Reportar las cedulas de los 5 mejores clientes que compran en el minisuper" << endl;
    cout << "[6] Salir " << endl;
    cout << "Seleccione una opcion... ";
    cin >> opR;
    return opR;
}

void Vista::muestraListaProd(MiniSuper& m)
{
    cout << "/======= Mostrando la lista de productos existentes =====/" << endl;
    cout << m.getListaProd() << endl;
    cout << "/========================================================/" << endl;
}

void Vista::muestraProdCategoria(MiniSuper&m)
{
    string cat = "";
    cout << "Ingrese Categoria: " << endl; 
    cout << "Categoria #1" << endl;
    cout << "Categoria #2" << endl;
    cout << "Categoria #3" << endl;
    cin.clear(); cin.ignore();
    getline(cin, cat);
    cout << "/========== Mostrando productos por Categoria =========/" << endl;
    cout << m.getProdCate(cat) << endl;
    cout << "/======================================================/" << endl;
}

void Vista::prodMinimosExist(MiniSuper&m)
{
    cout << "/======= Mostrando la lista de Productos menor a su min existencia =====/" << endl;
    cout << m.getProdMenorLimit() << endl;
    cout << "/=======================================================================/" << endl;
}

void Vista::facturasCliente(MiniSuper& m)
{
    string ced;
    cout << "Digite la cedula del cliente: "; cin >> ced;
    cout << "/======= Mostrando la lista de Facturas =====/" << endl;
    cout << m.getListaFacturas(ced) << endl;
    cout << "/============================================/" << endl;
}

void Vista::reporteMejoresClientes(MiniSuper& m)
{
}

void Vista::despedida()
{
    cout << "-----------------------> CREADORES <----------------------" << endl;
    cout << "Benjamin Alexander Solano Ortega" << endl;
    cout << "Lesber Huerta Cornejo" << endl;
    cout << "-----------------> GRACIAS POR UTILIZAR <-----------------" << endl;
}
