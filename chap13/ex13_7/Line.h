#ifndef __LINE_H
#define __LINE_H

#include <iostream>
#include "Shape.h"
#include "Point.h"

using namespace std;

class Line: public Shape {
private:
    Point start;
    Point end;
public:
    Line(const Point &s, const Point &e, char* c): start(s), end(e), Shape(c) {}
    void draw() {cout << "draw a line from " << "("<< start.getX() << ", " << start.getY() << ")" << " to " << "("<< start.getX() << ", " << start.getY() << ")" << endl << "with color";outputColor();}
};

#endif