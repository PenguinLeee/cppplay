#include <iostream>
#include <cmath>

using namespace std;

class Int {

private:
    int i;
public:
    Int(int a = 0) {
        i = a;
    }
    
    void print() {
        cout << "number is " << i << endl;
    }

    Int operator ++(int) {
        Int temp;
        temp.i = i++;
        return temp;
    } 

    Int operator ++() {
        Int temp;
        temp.i = ++i;
        return temp;
    }

    
};

int main() {
    Int a(0), b(1), c(2);
    a.print();
    (a++).print();
    a.print();
    (++a).print();
    a.print();
}
