#include<iostream>
using namespace std;

int main() {
    int f, negativo, nulo, positivo, vector[10];
    positivo = 0;
    negativo = 0;
    nulo = 0;
    // Ingresa 10 valores al array
    for (f=0;f<=9;f++) {
        cout << "Ingrese Numero " << f+1 << " : ";
        cin >> vector[f];
    }
    // Muestra Positivos, Negativos, Nulos
    for (f=0;f<=9;f++) {
        if (vector[f]==0) {
            nulo = nulo+1;
        } else {
            if (vector[f]>0) {
                positivo = positivo+1;
            } else {
                negativo = negativo+1;
            }
        }
    }
    cout << endl << "Total de Nulos : " << nulo << endl;
    cout << "Total de Positivos : " << positivo << endl;
    cout << "Total de Negativos : " << negativo << endl;
    return 0;
}
