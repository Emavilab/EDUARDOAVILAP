#include <iostream>

void elementosMayores(int arr[], int tam, int numero) {
    std::cout << "Elementos mayores que " << numero << ": ";
    
    for (int i = 0; i < tam; i++) {
        if (arr[i] > numero) {
            std::cout << arr[i] << " ";
        }
    }
    
    std::cout << std::endl;
}

int main() {
    int arreglo[] = {5, 10, 15, 20, 25};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    int numero;

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    elementosMayores(arreglo, tam, numero);

    return 0;
}

