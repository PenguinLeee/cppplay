#include "Circle.h"
#include "Line.h"
#include "Point.h"
#include "Shape.h"

#include <iostream>

int main() {
    Shape *ps[3];
    Shape s("Red");

    Point p1(10, 10), p2(100, 100), p3(50, 50);
    Line l(p1, p2, "Green");

    Circle c(p3, 20, "magenta");

    ps[0] = &s;
    ps[1] = &l;
    ps[2] = (Shape*)&c;
    for (int i = 0; i < 3; i++) {
        ps[i]->draw();
    }
    return 0;
}