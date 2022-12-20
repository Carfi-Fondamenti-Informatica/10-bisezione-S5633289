#include <iostream>
#include "lib.h"
#include "math.h"
using namespace std;


void funzione(float a, float b) {
    float fa = pow(a, 2) * cos(a) + 1;
    float fb = pow(b, 2) * cos(b) + 1;
    float fx;
    if (fa * fb >= 0) {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
        funzione(a, b);
    } else {
        float x = (a + b) / 2;
        if (x == 0) {
            fx = pow(x, 2) * cos(x) + 1;
            cout << x;
            cout << fx;
        } else {
            float err;
            if (fa * fb < 0) {
                b = x;
            } else {
                a = x;
            }
            err = abs((b - a) / 2);
            if (err >= pow(10, -6)) {
                funzione(a, b);
            } else {
                cout << x;
                cout << fx;
            }
        }
    }
}

int main() {
    float a;
    float b;
    cout << "inserire estremi" << endl;
    cin >> a >> b;
    funzione(a,b);
    return 0;
}

