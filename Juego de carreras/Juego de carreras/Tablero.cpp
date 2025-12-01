#include <iostream>
#include "Const.h"

void InicializarTablero(char tablero[CASILLAS]) {
    for (int i = 0; i < CASILLAS; i++) {
        tablero[i] = '.';
        std::cout << tablero[i];  
    }
    std::cout << std::endl;  
}

void ImprimirTablero(char tablero[CASILLAS]) {
    for (int i = 0; i < 50; i++) {
        std::cout << tablero[i];  
    }
    std::cout << std::endl;  
}
