#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Tablero.h"
#include "Dado.h"
#include "Const.h"

int main() {

	srand(time(NULL));
	char tablero[CASILLAS];
	InicializarTablero(tablero);
	ImprimirTablero(tablero);


	int resultado = lanzarDado();
	std::cout << "Has sacado un " << resultado;


	return 0;
}