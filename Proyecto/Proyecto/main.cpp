#include "Producto.h"
#include "Conserva.h"
#include "Fecha.h"
#include "ProductoPerecedero.h"
#include "Perecedero.h"
#include "Abarrote.h"
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


int main() {


	// TEST #1 Probando Objetos directamente la herencia de PRODUCTO (Parte #1)
	////Prueba de objetos... PRODUCTO CONSERVA #2
	//int d = 0, m = 0, a = 0;
	//cout << "Ingrese el dia de introduccion del producto   : "; cin >> d;
	//cout << "Ingrese el mes de introduccion del producto   : "; cin >> m;
	//cout << "Ingrese el anio de introduccion del producto  : "; cin >> a;
	//Fecha* ingreso = new Fecha(d, m, a);
	//system("cls");
	//Conserva* producto1 = new Conserva("007", "Pechuga", "Kilo de Pechuga", 1400.0, 5, 10,ingreso,true);
	//cout << producto1->toString() << endl;
	//system("pause");
	//system("cls");
	//// Prueba de objetos... PRODUCTO ABARROTE CATEGORIA #2
	//int d2 = 0, m2 = 0, a2 = 0;
	//cout << "Ingrese el dia de introduccion del producto   : "; cin >> d2;
	//cout << "Ingrese el mes de introduccion del producto   : "; cin >> m2;
	//cout << "Ingrese el anio de introduccion del producto  : "; cin >> a2;
	//Fecha* ingreso1 = new Fecha(d2, m2, a2);
	//system("cls");
	//int d1 = 0, m1 = 0, a1 = 0;
	//cout << "Ingrese el dia de vencimiento del producto   : "; cin >> d1;
	//cout << "Ingrese el mes de vencimiento del producto   : "; cin >> m1;
	//cout << "Ingrese el anio de vencimiento del producto  : "; cin >> a1;
	//Fecha* vence = new Fecha(d1, m1, a1);
	//system("cls");
	//Perecedero* vencimiento = new Perecedero(vence);
	//Abarrote* producto2 = new Abarrote("001", "Lata de Atun", "250g de atun", 900.0, 9, 10, ingreso1, true, 250.0, vencimiento, "Cinta Azul");
	//cout << producto2->toString();

	// TEST #2 PROBANDO OBJETOS DEL PATRON DECORADOR...

	// Fechas de Ingreso...
	Fecha* f1 = new Fecha(1, 1, 10);
	Fecha* f2 = new Fecha(2, 2, 20);
	Fecha* f3 = new Fecha(3, 3, 30);
	Fecha* f7 = new Fecha(7, 7, 70);
	Fecha* f8 = new Fecha(8, 8, 80);
	Fecha* f9 = new Fecha(9, 9, 90);
	// Fechas de Vencimiento
	Fecha* f4 = new Fecha(4, 4, 40);
	Fecha* f5 = new Fecha(5, 5, 50);
	Fecha* f6 = new Fecha(6, 6, 60);
	Perecedero* v1 = new Perecedero(f4);
	Perecedero* v2 = new Perecedero(f5);
	Perecedero* v3 = new Perecedero(f6);
	// Creando tipo de empaque...
	Empaque* emp = new Empaque(true);

	// Creando Objetos...
	Conserva* conserva1 = new Conserva("007", "Pechuga", "Kilo de Pechuga", 1400.0, 5, 10, f1, true);
	Conserva* conserva2 = new Conserva("002", "Cordero", "Kilo de Cordero", 2400.0, 5, 10, f2, true);
	Conserva* conserva3 = new Conserva("003", "Pavo", "Kilo de Pavo", 1200.0, 5, 10, f3, true);
	
	// Creando Objetos Perecederos...
	Abarrote* abarrote1 = new Abarrote("001", "Lata de Atun", "250g de atun", 900.0, 9, 10, f7, true, 250.0, v1, "Cinta Azul");
	Embutido * embutido1 = new Embutido("005", "Salchicha Alemana", "8 Salchichas", 1300.0, 10, 10, f8, false, 500.0, v2, "Dragon", "???","Danken",emp);
	Abarrote* abarrote2 = new Abarrote("008", "Lata de Sardina", "350g de Sardina", 1900.0, 2, 10, f7, true, 450.0, v1, "Tesoro Del Mar");

	// Creando Objeto a Decorar (carrito)
	Carrito* carrito = new Carrito();

	// Creando y Asociando los productos a la compra
	DecConserva* Pechuga = new DecConserva(carrito, conserva1);
	DecConserva* Cordero = new DecConserva(Pechuga, conserva2);
	DecConserva* Pavo = new DecConserva(Cordero, conserva3);
	DecAbarrote* L_Atun = new DecAbarrote(Pavo, abarrote1);
	DecEmbutido* Salchicha = new DecEmbutido(L_Atun, embutido1);
	DecAbarrote* L_Sardina = new DecAbarrote(Salchicha, abarrote2);

	// Mostrando Lista de Compras...
	cout << "El carrito contiene: " << endl << endl;
	cout << L_Sardina->toString() << endl;

	system("pause");
	system("cls");

	// Creando cliente, fecha y venta...
	Cliente* customer = new Cliente("Benjamin", "0-007");
	Fecha* f10 = new Fecha(14, 4, 2024);
	Venta* venta = new Venta(customer, f10, L_Sardina);

	cout << venta->toString() << endl;


	system("pause > 0");
}