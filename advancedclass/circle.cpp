#include <iostream>
#include "point.h"

using namespace std;

class Circle {

private:
    Point center;
    double radius;
    const double PI;

    void printCenter() {
        cout << "center: " << center.getX() << ", " << center.getY() << endl;
    }

public:
    
    Circle(Point &point, double rad, double pi=3.1415926):radius(rad), PI(pi) {
        center.setLocation(point.getX(), point.getY());
        center.setName(point.getName());
    }

    void print_info() {
        printCenter();
        cout << "radius: " << radius << endl;
    }

};

int main() {
    Point p = Point("point", 1, 2);
    Circle c = Circle(p, 2);

    c.print_info();
}