#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Para usar la función std::sort

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 3;

void mostrarMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matrizOriginal[FILAS][COLUMNAS];
    int matrizOrdenada[FILAS][COLUMNAS];

   
    srand(time(0));

  
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matrizOriginal[i][j] = rand() % 100; // Generar números aleatorios entre 0 y 99
        }
    }

  
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matrizOrdenada[i][j] = matrizOriginal[i][j];
        }
    }

   
    int totalElementos = FILAS * COLUMNAS;
    sort(&matrizOrdenada[0][0], &matrizOrdenada[0][0] + totalElementos);

    cout << "Matriz Original:" << endl;
    mostrarMatriz(matrizOriginal);

    cout << "\nMatriz Ordenada:" << endl;
    mostrarMatriz(matrizOrdenada);

    return 0;
}

