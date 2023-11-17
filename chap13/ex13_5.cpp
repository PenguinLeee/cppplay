#include <iostream>

using namespace std;

class Complex {

private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0) {
        cout << "build complex number" << endl;
        this->real = r;
        this->imag = i;
    }

    void print() {
        cout << real << "+" << imag << "i" << endl;
    }

    friend Complex operator +(const Complex &c1, const Complex &c2);
    friend Complex operator -(const Complex &c1, const Complex &c2);
};

Complex operator +(const Complex &c1, const Complex &c2) {
    Complex res;
    res.real = c1.real + c2.real;
    res.imag = c1.imag + c2.imag;
    return res;
}

Complex operator -(const Complex &c1, const Complex &c2) {
    Complex res;
    res.real = c1.real - c2.real;
    res.imag = c1.imag - c2.imag;
    return res;
}

int main() {
    Complex a(1, 2), b(3, 4), c, d, e;
    cout << "here" << endl;
    c = a+b;
    cout << "here" << endl;
    e = 10 - b;
}