#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265359;

int main() {
    int opcion;
    double area;

    cout << "Calculadora de areas de figuras geometricas" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Opciones: " << endl;
    cout << "1. Triangulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Rectangulo" << endl;
    cout << "4. Circulo" << endl;
    cout << "Ingrese el numero de la figura para la cual desea calcular el area: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            double base, altura;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = 0.5 * base * altura;
            break;

        case 2:
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado;
            break;

        case 3:
            double base_rect, altura_rect;
            cout << "Ingrese la base del rectangulo: ";
            cin >> base_rect;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura_rect;
            area = base_rect * altura_rect;
            break;

        case 4:
            double radio;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            area = PI * pow(radio, 2);
            break;

        default:
            cout << "Opcion invalida. Por favor, ingrese un numero valido." << endl;
            return 1;
    }

    cout << "El area de la figura seleccionada es: " << area << endl;

    return 0;
}

