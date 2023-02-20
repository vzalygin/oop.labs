// Вариант 24

#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    int d[4][4];
    int max = 0;
    int max_i, max_v;

    cout << "input the matrix(4x4)" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> d[i][j];
        }
    }
    
    cout << "matrix:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i < 4; ++i) {
        int curr = d[i][i] * d[i-1][i-1];
        if (max < curr) {
            max = curr;
            max_i = i;
            max_v = d[i][i];
        }
    }

    cout << "element value: " << max_v << endl;
    cout << "string index: " << max_i+1 << endl;
    cout << "string address: " << &d[max_i] << endl;
    cout << "column address: " << &d[max_i][max_i] << endl;

    return 0;
}