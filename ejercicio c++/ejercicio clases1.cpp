#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;


vector<int> crearVector() {
    vector<int> vec(10);
    return vec;
}


void llenarVector(vector<int>& vec) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % 100; 
        cout << vec[i] << " ";
    }
    cout << endl;
}


void ordenarVector(vector<int>& vec) {
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void calcularMaxMin(vector<int>& vec) {
    int maximo = *max_element(vec.begin(), vec.end());
    int minimo = *min_element(vec.begin(), vec.end());
    cout << "Maximo: " << maximo << ", Minimo: " << minimo << endl;
}


void calcularPromedio(vector<int>& vec) {
    int suma = 0;
    for (int i = 0; i < vec.size(); i++) {
        suma += vec[i];
    }
    double promedio = static_cast<double>(suma) / vec.size();
    cout << "Promedio: " << promedio << endl;
}

int main() {
    // Procedimiento 1
    vector<int> miVector = crearVector();

    // Procedimiento 2
    cout << "Vector aleatorio: ";
    llenarVector(miVector);

    // Procedimiento 3
    cout << "Vector ordenado: ";
    ordenarVector(miVector);

    // Procedimiento 4
    calcularMaxMin(miVector);

    // Procedimiento 5
    calcularPromedio(miVector);

    return 0;
}
