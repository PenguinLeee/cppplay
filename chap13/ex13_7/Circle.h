#ifndef __CIRCLE_H
#define __CIRCLE_H

#include <iostream>
#include "Shape.h"
#include "Point.h"

using namespace std;

class Circle: public Shape {
private:
    Point center;
    int radius;
public:
    Circle(const Point& p, int r, char* color): center(p), radius(r), Shape(color) {}
    virtual void draw() {}
};

#endif