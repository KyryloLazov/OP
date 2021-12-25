#include <iostream>
#include<ctime>
using namespace std;

double** matrixA_Input(double** matrixA, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        matrixA[i] = new double[size];
        for (int j = 0; j < size; j++) {
            matrixA[i][j] = rand() % 10;
        }
    }
    return matrixA;
}

double** matrixB_Input(double** matrixA, double** matrixB, int size) {
    for (int i = 0; i < size; i++) {
        matrixB[i] = new double[size];
        for (int j = 0; j < size; j++) {
            if (i == 0 and j == 0) {
                matrixB[i][j] = (matrixA[i][j + 1] + matrixA[i + 1][j]) / 2;
            }
            if (i == 0 and j != 0 and j != size - 1) {
                matrixB[i][j] = (matrixA[i][j - 1] + matrixA[i][j + 1] + matrixA[i + 1][j]) / 3;
            }
            if (i == 0 and j == size - 1) {
                matrixB[i][j] = (matrixA[i][j - 1] + matrixA[i + 1][j]) / 2;
            }
            if (j == 0 and i != 0 and i != size - 1) {
                matrixB[i][j] = (matrixA[i - 1][j] + matrixA[i][j + 1] + matrixA[i + 1][j]) / 3;
            }
            if (i == size - 1 and j != size - 1 and j != 0) {
                matrixB[i][j] = (matrixA[i - 1][j] + matrixA[i][j - 1] + matrixA[i][j + 1]) / 3;
            }
            if (i == size - 1 and j == 0) {
                matrixB[i][j] = (matrixA[i - 1][j] + matrixA[i][j + 1]) / 2;
            }
            if (j == size - 1 and i != 0 and i != size - 1) {
                matrixB[i][j] = (matrixA[i][j - 1] + matrixA[i + 1][j] + matrixA[i - 1][j]) / 3;
            }
            if (i == size - 1 and j == size - 1) {
                matrixB[i][j] = (matrixA[i][j - 1] + matrixA[i - 1][j]) / 2;
            }
            if (i != 0 and i != size - 1 and j != size - 1 and j != 0) {
                matrixB[i][j] = (matrixA[i][j - 1] + matrixA[i][j + 1] + matrixA[i + 1][j] + matrixA[i - 1][j]) / 4;
            }
        }
    }
    return matrixB;
}
int main()
{
    int size;
    cout << "Imput matrix size: ";
    cin >> size;
    double** matrixA = new double* [size];
    double** matrixB = new double* [size];

    matrixA = matrixA_Input(matrixA, size);
    matrixB = matrixB_Input(matrixA, matrixB, size);

    cout << "Matrix A:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix B:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }
}
