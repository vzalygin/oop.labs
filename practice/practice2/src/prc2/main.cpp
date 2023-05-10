#include <iostream>

using namespace std;

typedef struct Matrix {
    double** value;
    int n;
    int m;
} Matrix;

Matrix* New(int n, int m) {
    double** value = new double*[n];
    for (size_t i = 0; i < n; ++i) {
        value[i] = new double[m];
    }
    Matrix* matrix = new Matrix{
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
            cout.precision(2);
            cout << matrix.value[i][j] << "\t";
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

void ToLower(Matrix& matrix) {
    int m = matrix.m, n = matrix.n;
    for (size_t i = 0; i < n-1; ++i) {
        for (size_t j = i+1; j < n; ++j) {
            if (matrix.value[i][i] != 0) {
                SubLine(matrix.value[n-1-i],
                        matrix.value[n-1-j],
                        matrix.m,
                        (matrix.value[n-1-j][m-1-i])/(matrix.value[n-1-i][m-1-i])
                );
            }
        }
    }
}

int main() {
    Matrix* matrix = nullptr;
    int n, m;

    cout << "Avaliable actions:\n1. Input matrix\n2. Print matrix\n3. Multiply mattix with number\n4. Get upper triangular matrix\n5. Get lower triangular matrix\n";
    
    while(true) {
      cout << "Input the number of an action you want\n";
      int action;
      cin >> action;
      switch(action) {
        case 1:
          cout << "Input the dimens of the matrix (n m)\n";
          cin >> n >> m;
          matrix = New(n, m);
          cout << "Input the matrix\n";
          InputMatrix(*matrix);
          break;
        case 2:
          PrintMatrix(*matrix);
          break;
        case 3:
          double x;
          cout << "Input the number\n";
          cin >> x;
          Mul(*matrix, x);
          PrintMatrix(*matrix);
          break;
        case 4:
          ToUpper(*matrix);
          PrintMatrix(*matrix);
          break;
        case 5:
          ToLower(*matrix);
          PrintMatrix(*matrix);
          break;
        default:
          cout << n << " is not a number of the action\n";
      }
    }
}
