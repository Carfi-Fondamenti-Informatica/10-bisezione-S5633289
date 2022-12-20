#include <iostream>
#include "lib.h"
#include "math.h"

using namespace std;

int init = 0;

void funzione(float a, float b) {
    float fa = pow(a, 2) * cos(a) + 1;
    float fb = pow(b, 2) * cos(b) + 1;
    float fx;
    float x;
    if (fa * fb >= 0 && init == 0) {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
        funzione(a, b);
    } else {
        init = 1;
        x = (a + b) / 2;
        fx = pow(x, 2) * cos(x) + 1;
        if (fx == 0) {
            cout << x << endl;
            cout << fx;
        } else {
            float err;
            if (fa * fb < 0) {
                b = x;
            } else {
                a = x;
            }
            err = abs((b - a) / 2);
            if (err >= 1e-6) {
                funzione(a, b);
            } else {
                cout << int(x * 10000) / 10000.0 << endl;
                cout << int(fx * 10000) / 10000.0 << endl;
            }
        }
    }
}

int main() {
    float a;
    float b;
    cout << "inserire estremi" << endl;
    cin >> a >> b;
    funzione(a, b);
    return 0;
}
