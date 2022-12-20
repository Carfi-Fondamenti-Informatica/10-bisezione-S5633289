#include <iostream>
#include "lib.h"
#include "math.h"

using namespace std;


float f(float z) {
    float fz = pow(z, 2) * cos(z) + 1;
    return fz;
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
            if (f(a) * f(x) < 0) {
                b = x;
            } else {
                a = x;
            }
            err = abs((b - a) / 2);
        }
    } while (err >= 1e-6);

    cout << x << endl;
    cout << f(x);

    return 0;
}
