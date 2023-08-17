#include <iostream>
using namespace std;

int main() {
    int numero, numeroInvertido = 0;


    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    // Invertir las cifras
    while (numero != 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    
    std::cout << "El numero invertido es: " << numeroInvertido << std::endl;

    return 0;
}

