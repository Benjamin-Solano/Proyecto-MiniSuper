// INCLUDE DE CONTROLADORA 
#include "Controladora.h"

int main() {
	system("color 81");
	Controladora* CO = new Controladora;
	CO->control0();
	delete CO;
	//// TEST #2 PROBANDO OBJETOS DEL PATRON DECORADOR...

	//// Fechas de Ingreso...
	//Fecha* f1 = new Fecha(1, 1, 10);
	//Fecha* f2 = new Fecha(2, 2, 20);
	//Fecha* f3 = new Fecha(3, 3, 30);
	//Fecha* f7 = new Fecha(7, 7, 70);
	//Fecha* f8 = new Fecha(8, 8, 80);
	//Fecha* f9 = new Fecha(9, 9, 90);
	//// Fechas de Vencimiento
	//Fecha* f4 = new Fecha(4, 4, 40);
	//Fecha* f5 = new Fecha(5, 5, 50);
	//Fecha* f6 = new Fecha(6, 6, 60);
	//Perecedero* v1 = new Perecedero(f4);
	//Perecedero* v2 = new Perecedero(f5);
	//Perecedero* v3 = new Perecedero(f6);
	//// Creando tipo de empaque...
	//Empaque* emp = new Empaque(true);

	//// Creando Objetos...
	//Conserva* conserva1 = new Conserva("007", "Pechuga", "Kilo de Pechuga", 1400.0, 5, 10, f1, true);
	//Conserva* conserva2 = new Conserva("002", "Cordero", "Kilo de Cordero", 2400.0, 5, 10, f2, true);
	//Conserva* conserva3 = new Conserva("003", "Pavo", "Kilo de Pavo", 1200.0, 5, 10, f3, true);
	//
	//// Creando Objetos Perecederos...
	//Abarrote* abarrote1 = new Abarrote("001", "Lata de Atun", "250g de atun", 900.0, 9, 10, f7, true, 250.0, v1, "Cinta Azul");
	//Embutido * embutido1 = new Embutido("005", "Salchicha Alemana", "8 Salchichas", 1300.0, 10, 10, f8, false, 500.0, v2, "Dragon", "???","Danken",emp);
	//Abarrote* abarrote2 = new Abarrote("008", "Lata de Sardina", "350g de Sardina", 1900.0, 2, 10, f7, true, 450.0, v1, "Tesoro Del Mar");

	//// Creando Objeto a Decorar (carrito)
	//Carrito* carrito = new Carrito();

	//// Creando y Asociando los productos a la compra
	//DecConserva* Pechuga = new DecConserva(carrito, conserva1);
	//DecConserva* Cordero = new DecConserva(Pechuga, conserva2);
	//DecConserva* Pavo = new DecConserva(Cordero, conserva3);
	//DecAbarrote* L_Atun = new DecAbarrote(Pavo, abarrote1);
	//DecEmbutido* Salchicha = new DecEmbutido(L_Atun, embutido1);
	//DecAbarrote* L_Sardina = new DecAbarrote(Salchicha, abarrote2);

	//// Mostrando Lista de Compras...
	//cout << "PRUEBA #1" << endl;
	//cout << "El carrito contiene: " << endl << endl;
	//cout << L_Sardina->toString() << endl;

	//system("pause");
	//system("cls");

	//// Creando cliente, fecha y venta...
	//cout << "Prueba #2" << endl;
	//Cliente* customer = new Cliente("Benjamin", "0-007");
	//Fecha* f10 = new Fecha(14, 4, 2024);
	//Venta* venta = new Venta(customer, f10, L_Sardina);

	//cout << venta->toString() << endl;
	//system("pause");
	//system("cls");

	//// Creando Factura
	//cout << "Prueba #3" << endl;
	//Factura* fac = new Factura(venta);
	//cout << fac->mostrar_Factura();
	//system("pause");
	//system("cls");


	//// Lista de ventas
	//cout << "Prueba #4" << endl;
	//cout << "Creando listas: " << endl;
	//ContenedorT<Venta>* contVentas = new ContenedorT<Venta>;
	//contVentas->ingresaElemento(venta);

	//cout << contVentas->display();
	//system("pause");
	//system("cls");

	//// Creando productos de por ahí sisi
	//cout << "Prueba #5" << endl;
	//Producto* sarshisha = new Embutido("000", "Salchicha Rusa", "2 Salchichas", 1300.0, 10, 10, f8, false, 500.0, v2, "TenryuBito", "Pregunton", "Danken", emp);
	//Producto* cosita = new Abarrote("001", "Lata de Sardina", "350g de Sardina", 1900.0, 2, 10, f7, true, 450.0, v1, "Sardimar");
	//
	//// Lista de productos 
	//cout << "Creando lista de productos" << endl;
	//ContenedorT<Producto>* contProductos = new ContenedorT<Producto>;
	//contProductos->ingresaElemento(sarshisha);
	//contProductos->ingresaElemento(cosita);
	//cout << "Mostrando lista de productos" << endl;
	//cout << contProductos->display() << endl;

	system("pause > 0");
	return 0;
}