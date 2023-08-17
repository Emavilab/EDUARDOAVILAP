#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int opcion;
    double temperatura;

    std::cout << "Seleccione la conversión que desea realizar:" << std::endl;
    std::cout << "1. Celsius a Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit a Celsius" << std::endl;
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << "Ingrese la temperatura en grados Celsius: ";
        std::cin >> temperatura;
        double resultado = celsiusToFahrenheit(temperatura);
        std::cout << "El equivalente en grados Fahrenheit es: " << resultado << std::endl;
    } else if (opcion == 2) {
        std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
        std::cin >> temperatura;
        double resultado = fahrenheitToCelsius(temperatura);
        std::cout << "El equivalente en grados Celsius es: " << resultado << std::endl;
    } else {
        std::cout << "Opción inválida. Por favor, seleccione una opción válida." << std::endl;
    }

    return 0;
}

