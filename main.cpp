#include <iostream>
#include "lib.h"
#include "math.h"

using namespace std;


float f(float a) {
    float fa = pow(a, 2) * cos(a) + 1;
    return fa;
}


int main() {
    float a, b, x, err;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    } while (f(a) * f(b) >= 0);

    do {
        x = (a + b) / 2;
        if (f(x) == 0) {
            cout << x << endl;
            cout << f(x);
            return 0;
        } else {
            if (f(a) * f(b) < 0) {
                b = x;
            } else {
                a = x;
            }
            err = abs((b - a) / 2);
        }
    } while (err >= 1e-6);

    cout << int(x * 10000) / 10000.0 << endl;
    cout << int(f(x) * 10000) / 10000.0;

    return 0;
}
