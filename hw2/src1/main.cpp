#include <iostream>
#include <clocale>

using std::cin;
using std::cout;
using std::endl;

int* input_arr(int length) {
    int *arr = new int[length];
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }
    return arr;
}

int compute_sum(int *a, int *p, int *b, int al, int bl) {
    int res = 0;
    for (int i = 0; i < al; ++i) {
        for (int j = 0; j < bl; ++j) {
            if (a[i] == b[j]) {
                res += p[i];
            }
        }
    }
    return res;
}

int main() {
    int count_a, count_b;
    cout << "Input amount of the winners" << endl;
    cin >> count_a;
    cout << "Input ids of the winners" << endl;
    int *a = input_arr(count_a);
    cout << "Input prizes" << endl;
    int *p = input_arr(count_a);
    cout << "Input amount of special winners" << endl;
    cin >> count_b;
    cout << "Input ids of special winners" << endl;
    int *b = input_arr(count_b);
    cout << "The sum of prizes is " << compute_sum(a, p, b, count_a, count_b) << endl;
}