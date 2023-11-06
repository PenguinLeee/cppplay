# include <iostream>

using namespace std;

int main() {
    int num = 1;
    const int *p = &num;

    // *p = num;
    cout << num << endl;
    num++;
    cout << num << endl;

    int *p1 = new int[10];
    for (int i = 0;i < 10; i++) {
        *(p1+i) = i * 2;
        cout << *(p1+i) << " ";
    }
    cout << endl;
    delete []p1;

    cout << add(1, 4) << endl;
}

inline int add(int a, int b) {
    return a + b;
}

int add(int a, int b) {
    return a + b;
}

float add(int a, int b) {
    return float(a + b);
}