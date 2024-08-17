#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void multiplyMatrices(int mat1[][MAX_SIZE], int rows1, int cols1,
                      int mat2[][MAX_SIZE], int rows2, int cols2,
                      int result[][MAX_SIZE]) {
    if (cols1 != rows2) {
        cerr << "Error: Matrices have incompatible dimensions for multiplication." << endl;
        return;
    }

    // Initialize the result matrix to 0
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[2][MAX_SIZE] = { {1, 2, 3},
                              {4, 5, 6} };

    int mat2[3][MAX_SIZE] = { {7, 8},
                              {9, 10},
                              {11, 12} };

    int result[2][MAX_SIZE];  // Initialize to 2 rows and 2 columns

    multiplyMatrices(mat1, 2, 3, mat2, 3, 2, result);

    cout << "Result of matrix multiplication:" << endl;
    printMatrix(result, 2, 2);

    return 0;
}