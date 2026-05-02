// Dane Thompson
// CIS 1202 808
// Assignment 15b - Templates
// testing half function with different types

#include <iostream>
using namespace std;

// template for float and double
template <typename T>
T half(T value) {
    return value / 2;
}

// special version for int (rounding)
int half(int value) {
    double temp = value / 2.0;

    if ((temp - (int)temp) >= 0.5) {
        return (int)temp + 1;
    }
    else {
        return (int)temp;
    }
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl; // 3.5
    cout << half(b) << endl; // 2.5
    cout << half(c) << endl; // 2

    return 0;
}
