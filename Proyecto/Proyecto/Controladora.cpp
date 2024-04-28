#include "Controladora.h"

Controladora::Controladora()
{
	
	miniS = new MiniSuper();
	fecha = new Fecha(28,4,2024);
	producto = nullptr;

}

Controladora::~Controladora()
{
	if (miniS) delete miniS;
}

void Controladora::control0()
{
	int opt = 0;
	do {
		opt = Vista::menuPrincipal();
		system("pause");
		system("cls");
		//Menu
		switch (opt) {
		case 1:
			controlMantenimiento();
			system("cls");
			break;
		case 2:
			controlVenta();
			system("cls");
			break;
		case 3:
			controlReportes();
			system("cls");
			break;
		case 5:
			despedida();
			break;
		default:

			break;
		}
	} while (opt != 4);
	system("pause");
	system("cls");
}
// Mantenimiento
void Controladora::controlMantenimiento()
{
	int optM = 0;
	do {
		optM = Vista::menuMantenimiento();
		system("pause");
		system("cls");
		
		switch (optM) {
		case 1:
			controlMantenimiento1();
			system("cls");
			break;
		case 2:
			controlMantenimiento2();
			system("cls");
			break;
		case 3:
			controlMantenimiento3();
			break;
		case 4:
			break;
		default:

			break;
		}
		
	} while (optM != 4);
	system("pause");
	system("cls");
}

void Controladora::controlMantenimiento1()
{
	int optM1 = 0;
	do {
		optM1 = Vista::ingresoProducto();
		system("pause");
		system("cls");

		switch (optM1) {
		case 1:
			ingresaConserva();
			system("cls");
			break;
		case 2:
			
			system("cls");
			break;
		case 3:
			
			break;
		case 4:
			break;
		default:

			break;
		}

	} while (optM1 != 4);
	system("pause");
	system("cls");
}

void Controladora::controlMantenimiento2()
{

}
void Controladora::controlMantenimiento3()
{

}
void Controladora::ingresaConserva()
{
	producto = Vista::ingresoConserva();
	miniS->ingresaProducto(producto);
}
// Venta
void Controladora::controlVenta()
{
	
}
// Reportes
void Controladora::controlReportes()
{
	int optR = 0;
	do {
		optR = Vista::menuReportes();
		system("pause");
		system("cls");
		//Menu
		switch (optR) {
		case 1:
			controlReportes1();
			system("cls");
			break;
		case 2:
			controlReportes2();
			system("cls");
			break;
		case 3:
			controlReportes3();
			break;
		case 4:
			controlReportes4();
			break;
		case 5:
			controlReportes5();
			break;
		case 6:
			break;
		default:

			break;
		}
	} while (optR != 6);
	system("pause");
	system("cls");
}

void Controladora::controlReportes1()
{
}

void Controladora::controlReportes2()
{
}

void Controladora::controlReportes3()
{
}

void Controladora::controlReportes4()
{
}

void Controladora::controlReportes5()
{
}

void Controladora::despedida()
{
	Vista::despedida();
}
