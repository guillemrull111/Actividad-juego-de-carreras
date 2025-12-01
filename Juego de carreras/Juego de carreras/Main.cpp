#include <iostream>
#include "Tablero.h"
#include <cstdlib>
#include <ctime>

int lanzarDado() {
	return 1 + rand() % 6;
}
int main() {
	srand(time(NULL));
	char tablero[CASILLAS];

	int resultado = lanzarDado();
	std::cout << "Has sacado un " << resultado;
	Tablero(tablero);

	return 0;
}