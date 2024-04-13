#include "Producto.h"
#include "Conserva.h"
#include "Fecha.h"
#include "ProductoPerecedero.h"
#include "Perecedero.h"
#include "Abarrote.h"

int main() {

	 //Prueba de objetos... PRODUCTO CONSERVA #2
	int d = 0, m = 0, a = 0;
	cout << "Ingrese el dia de introduccion del producto   : "; cin >> d;
	cout << "Ingrese el mes de introduccion del producto   : "; cin >> m;
	cout << "Ingrese el anio de introduccion del producto  : "; cin >> a;
	Fecha* ingreso = new Fecha(d, m, a);
	system("cls");
	Conserva* producto1 = new Conserva("007", "Pechuga", "Kilo de Pechuga", 1400.0, 5, 10,ingreso,true);
	cout << producto1->toString() << endl;
	system("pause");
	system("cls");

	// Prueba de objetos... PRODUCTO ABARROTE CATEGORIA #2
	int d2 = 0, m2 = 0, a2 = 0;
	cout << "Ingrese el dia de introduccion del producto   : "; cin >> d2;
	cout << "Ingrese el mes de introduccion del producto   : "; cin >> m2;
	cout << "Ingrese el anio de introduccion del producto  : "; cin >> a2;
	Fecha* ingreso1 = new Fecha(d2, m2, a2);
	system("cls");

	int d1 = 0, m1 = 0, a1 = 0;
	cout << "Ingrese el dia de vencimiento del producto   : "; cin >> d1;
	cout << "Ingrese el mes de vencimiento del producto   : "; cin >> m1;
	cout << "Ingrese el anio de vencimiento del producto  : "; cin >> a1;
	Fecha* vence = new Fecha(d1, m1, a1);
	system("cls");
	Perecedero* vencimiento = new Perecedero(vence);
	Abarrote* producto2 = new Abarrote("001", "Lata de Atun", "250g de atun", 900.0, 9, 10, ingreso1, true, 250.0, vencimiento, "Cinta Azul");
	cout << producto2->toString();






	system("pause > 0");
}