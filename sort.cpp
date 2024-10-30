#include <iostream>

using namespace std;

const int MAX_TAMANHO = 100; // Define o tamanho máximo do vetor
int vetor[MAX_TAMANHO];      // Declara o vetor
int tamanho;                 // Variável para armazenar o tamanho do vetor

// Função de troca
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função de ordenação Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Função de ordenação Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Função de ordenação Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    cout << "Insira o número de elementos (positivo" << MAX_TAMANHO << "): ";
    cin >> tamanho;

    // Verifica se o número de elementos é válido
    while (tamanho <= 0 || tamanho > MAX_TAMANHO) {
        cout << "Valor incorreto. Por favor, insira um número positivo e menor que " << MAX_TAMANHO << ": ";
        cin >> tamanho;
    }

    // Coleta os valores do usuário
    for (int i = 0; i < tamanho; i++) {
        cout << "Insira o valor " << (i + 1) << ": ";
        cin >> vetor[i];

        // Verifica se o valor é negativo
        while (vetor[i] < 0) {
            cout << "Valor incorreto. Insira um valor não negativo: ";
            cin >> vetor[i];
        }
    }

    // Seleciona o algoritmo de ordenação com base na quantidade de elementos
    if (tamanho <= 20) {
        insertionSort(vetor, tamanho);
        cout << "Usando Insertion Sort." << endl;
    } else if (tamanho <= 30) {
        bubbleSort(vetor, tamanho);
        cout << "Usando Bubble Sort." << endl;
    } else {
        selectionSort(vetor, tamanho);
        cout << "Usando Selection Sort." << endl;
    }

    // Exibe os valores ordenados
    cout << "Valores ordenados: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
