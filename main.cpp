//
// Created by Miguel Mercado on 9/10/23.
//

#include <iostream>
using namespace std;

// Algoritmo de ordenamiento burbuja (Bubble Sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Arreglo de prueba
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    // Tamaño del arreglo
    int n = sizeof(arr) / sizeof(arr[0]);

    // Imprimir arreglo antes de ordenar
    cout << "Array antes de ordenar:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Ordenar arreglo
    bubbleSort(arr, n);

    // Imprimir arreglo después de ordenar
    cout << "Array después de ordenar:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
