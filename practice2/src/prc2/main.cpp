#include <iostream>

using namespace std;

typedef struct Matrix {
    double** value;
    int n;
    int m;
} Matrix;

Matrix New(int n, int m) {
    double** value = new double*[n];
    for (size_t i = 0; i < n; ++i) {
        value[i] = new double[m];
    }
    Matrix matrix = {
        value, n, m
    };
    return matrix;
}

void Mul(Matrix& matrix, double alpha) {
    for (size_t i = 0; i < matrix.n; ++i) {
        for (size_t j = 0; j < matrix.m; ++j) {
            matrix.value[i][j] *= alpha;
        }
    }
}

void PrintMatrix(Matrix& matrix) {
    for (size_t i = 0; i < matrix.n; ++i) {
        for (size_t j = 0; j < matrix.m; ++j) {
            cout << matrix.value[i][j] << '\t';
        }
        cout << endl;
    }
}

void InputMatrix(Matrix& matrix) {
    for (size_t i = 0; i < matrix.n; ++i) {
        for (size_t j = 0; j < matrix.m; ++j) {
            cin >> matrix.value[i][j];
        }
    }
}

void SubLine(double* ded, double* red, int dim, int k) {
    for (size_t i = 0; i < dim; ++i) {
        red[i] -= ded[i] * k;
    }
}

void ToUpper(Matrix& matrix) {
    for (size_t i = 0; i < matrix.n-1; ++i) {
        for (size_t j = i; j < matrix.n-1; ++j) {
            SubLine(matrix.value[j],
                    matrix.value[j+1],
                    matrix.m,
                    matrix.value[j+1][0]/matrix.value[j][0]
            );
        }
    }
}

int main()
{
    int n, m;
    cout << "Input the matrix dims (n m): " << endl;
    cin >> n >> m;
    cout << "Input the matrix" << endl;

    Matrix matrix = New(n, m);
    InputMatrix(matrix);
    PrintMatrix(matrix);
    ToUpper(matrix);
    PrintMatrix(matrix);
}
