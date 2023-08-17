#include <iostream>


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int size = 10;
    int numbers[size];

    
    std::cout << "Ingrese 10 numeros:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    
    insertionSort(numbers, size);

   
    std::cout << "Vector ordenado:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

