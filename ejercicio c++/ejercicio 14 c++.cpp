#include <iostream>
using namespace std;


int main() {
    int N;
    int suma = 0;

    std::cout << "Ingrese el numero l�mite (N): ";
    std::cin >> N;

    // Calcula la suma de los N primeros n�meros naturales
    for (int i = 1; i <= N; i++) {
        suma += i;
    }

    std::cout << "La suma de los " << N << " primeros numeros naturales es: " << suma << std::endl;

    return 0;
}

