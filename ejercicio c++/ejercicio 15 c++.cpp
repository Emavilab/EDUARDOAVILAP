#include <iostream>

using namespace std;

int main() {
    const int filas = 4;
    const int columnas = 5;
    int matriz[filas][columnas];

    // Cargar la matriz con los primeros números naturales
    int numero = 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = numero;
            numero++;
        }
    }

    // Imprimir la matriz
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Buscar un número en la matriz
    int numeroBuscado;
    cout << "Ingrese un número a buscar: ";
    cin >> numeroBuscado;

    bool encontrado = false;
    int filaEncontrada, columnaEncontrada;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == numeroBuscado) {
                encontrado = true;
                filaEncontrada = i;
                columnaEncontrada = j;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    // Mostrar el resultado de la búsqueda
    if (encontrado) {
        cout << "El número " << numeroBuscado << " se encuentra en la fila " << filaEncontrada + 1
             << " y la columna " << columnaEncontrada + 1 << endl;
    } else {
        cout << "El número " << numeroBuscado << " no se encuentra en la matriz." << endl;
    }

    return 0;
}

