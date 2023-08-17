#include <iostream>
#include <sstream>


int main() {
    const int maxNumbers = 5;
    std::stringstream concatenatedNumbers;

    std::cout << "Ingrese " << maxNumbers << " numeros positivos (ingrese 0 o negativo para terminar):\n";

    int num;
    int numbersRead = 0;

    while (numbersRead < maxNumbers) {
        std::cout << "Ingrese el numero " << numbersRead + 1 << ": ";
        std::cin >> num;

        if (num <= 0) {
            break;
        }

        concatenatedNumbers << num;
        numbersRead++;
    }

    std::string result = concatenatedNumbers.str();

    if (result.empty()) {
        std::cout << "No se ingresaron numeros positivos." << std::endl;
    } else {
        std::cout << "Numeros concatenados: " << result << std::endl;
    }

    return 0;
}

