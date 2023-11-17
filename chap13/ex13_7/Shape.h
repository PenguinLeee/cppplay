#ifndef __SHAPE_H
#define __SHAPE_H

#include <iostream>

using namespace std;

class Shape {
private:
    char Color[10];
public:
    Shape(char* c);
    virtual void draw() {cout << "Draw a shape with color " << Color << endl;}
    void outputColor() {cout << this->Color << endl;}
};

#endif