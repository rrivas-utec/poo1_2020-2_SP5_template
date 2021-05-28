//
// Created by rudri on 9/14/2020.
//

#ifndef POO1_SP5_H
#define POO1_SP5_H

#include <vector>
using namespace std;

int* concatenar_arreglos(int* arreglo_1, int cantidad_1, int* arreglo_2, int cantidad_2);
int* generar_arreglo(int cantidad, int valor, int step);
bool numeros_en_secuencia(vector<int> numeros);
bool es_sudoku_cuadrante_valido(int** quadrant, int nrow, int ncol);
bool es_cuadrado_magico(int** magico, int lado);
vector<int> obtener_maximo_comun_divisores(const vector<vector<int>>& matriz);

void ejercicio_1();
void ejercicio_2();
void ejercicio_3();
void ejercicio_4();
void ejercicio_5();
void ejercicio_6();

#endif
