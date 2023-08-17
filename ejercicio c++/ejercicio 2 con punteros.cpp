#include <iostream>


void convertirSegundos(int totalSegundos, int* horas, int* minutos, int* segundos) {
    *horas = totalSegundos / 3600;           
    totalSegundos %= 3600;                  
    *minutos = totalSegundos / 60;          
    *segundos = totalSegundos % 60;         
}

int main() {
    int totalSegundos, horas, minutos, segundos;

    std::cout << "Ingrese el numero total de segundos: ";
    std::cin >> totalSegundos;

    convertirSegundos(totalSegundos, &horas, &minutos, &segundos);

    std::cout << "Horas: " << horas << std::endl;
    std::cout << "Minutos: " << minutos << std::endl;
    std::cout << "Segundos: " << segundos << std::endl;

    return 0;
}

