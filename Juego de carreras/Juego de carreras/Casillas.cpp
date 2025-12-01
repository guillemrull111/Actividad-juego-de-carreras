#include <iostream>
#include "Const.h"
#include "Dado.h"

//void AvanzarCasillas(char tablero[CASILLAS]) {
//
//	if
//}

void CasillaMultiplo5(char tablero[CASILLAS]) {

	int InputUsuario;

	if (tablero[5] || tablero [10] || tablero [15] || tablero[20] || tablero[25] || tablero[30] || tablero[35] || tablero[40] || tablero[45] || tablero[50])
	{
		std::cout << "Has caido en una posicion multiplo de 5, puedes volver a lanzar el dado, pulsa (1) para lanzarlo" << std::endl;
		std::cin >> InputUsuario;

		if (InputUsuario == 1)
		{
			lanzarDado();
		}
	}
}