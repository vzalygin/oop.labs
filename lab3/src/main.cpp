#include <iostream>
#include <math.h>

using std::sin, std::cin, std::cout, std::endl;

int main() {
    int k;
    
    cout << "input k" << endl;
    cin >> k;
    
    for (int i = 0; i < k; ++i) {
        if (sin(i+1) < 0) {
            cout << "found sin(x) = " << sin(i+1) << " where x = " << i+1 << endl;
        }
    }
    
    return 0;
}