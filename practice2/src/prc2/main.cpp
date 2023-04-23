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

void SubLine(double*& ded, double*& red, int dim, double k) {
    for (size_t i = 0; i < dim; ++i) {
        red[i] -= ded[i] * k;
    }
}

void ToUpper(Matrix& matrix) {
    for (size_t i = 0; i < matrix.n-1; ++i) {
        for (size_t j = i+1; j < matrix.n; ++j) {
            if (matrix.value[i][i] != 0) {
                SubLine(matrix.value[i],
                        matrix.value[j],
                        matrix.m,
                        (matrix.value[j][i])/(matrix.value[i][i])
                );
            }
        }
    }
}

void ToDown(Matrix& matrix) {
    for (size_t i = matrix.n-2; i >= 0; --i) {
        for (size_t j = i+1; j < matrix.n; ++j) {
            if (matrix.value[i][i] != 0) {
                SubLine(matrix.value[i],
                        matrix.value[j],
                        matrix.m,
                        (matrix.value[j][i])/(matrix.value[i][i])
                );
            }
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
