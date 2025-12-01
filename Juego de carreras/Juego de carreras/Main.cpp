#include <iostream>
#include "Tablero.h"
#include <cstdlib>
#include <ctime>
#include "Dado.h"
#include "Const.h"
#include "Casillas.h"

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