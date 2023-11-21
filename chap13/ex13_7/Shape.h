#ifndef __SHAPE_H
#define __SHAPE_H

#include <iostream>
#include <string.h>

using namespace std;

class Shape {
private:
    char Color[10];
public:
    Shape(char* c) {strncpy(Color, c, 9);}
    virtual void draw() {cout << "Draw a shape with color " << Color << endl;}
    void outputColor() {cout << this->Color << endl;}
};

#endif