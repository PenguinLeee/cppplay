/*
 * @Description: As vividly shown in the code, 
 * @Version: 2.0
 * @Author: pen9u1nee
 * @Date: 2023-11-09 14:42:09
 * @LastEditors: pen9u1nee
 * @LastEditTime: 2023-11-09 15:16:25
 */
#include <iostream>

class Complex {

private:
    double real;
    double imag;

public:
    Complex(double r=0, double i=0): real(r), imag(i) {

    }

    Complex(const Complex &a): real(a.real), imag(a.imag) {

    }

    ~Complex() {
        std::cout << "destructor" << std::endl;
    }

    void print() {
        std::cout << this->real << "+" << this->imag << "i" << std::endl;
    }

    Complex operator +(const Complex &a) {
        Complex temp;
        temp.real = real + a.real;
        temp.imag = imag + a.imag;
        return temp;
    }
};

int main() {
    Complex a(1,2), b(3);
    Complex *c;
    *c = a+b;
    std::cout << "here" << std::endl;
    c->print();
    delete c;
}