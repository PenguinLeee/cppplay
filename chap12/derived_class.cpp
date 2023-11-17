/*
 * @Description: As vividly shown in the code, 
 * @Version: 2.0
 * @Author: pen9u1nee
 * @Date: 2023-11-08 16:59:33
 * @LastEditors: pen9u1nee
 * @LastEditTime: 2023-11-08 17:29:00
 */
#include <iostream>
using namespace std;

class A {

private:
    int a;

public:
    int aa;
    A(int x):a(x) {
        cout << "construct int a in class A: " << a << endl;
    }

    ~A() {
        cout << "destroy int a in class A: " << a << endl;
    }
};

class B: public A {

private:
    
    A y;
    int b, c;
    const int d;
    A x;

public:
    int aa;

    B(int v): d(v-1), x(v+1), y(v+2), A(v) {
        aa = 1;
        cout << "aa: " << aa << endl;
        cout << "d: " << d << endl;
        b = 0;
        cout << "construct b" << endl;
        c = 1;
        cout << "construct c" << endl;
        cout << "construct B" << endl;
    }

    ~B() {
        cout << "B destroyed" << endl;
    }
};

int main() {
    B(10);
    return 0;
}