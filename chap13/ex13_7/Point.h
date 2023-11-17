#ifndef __POINT_H
#define __POINT_H

class Point {
private:
    int x, y;

public:
    Point(int xx = 0, int yy = 0): x(xx), y(yy) {}
    Point(const Point& p): x(p.x), y(p.y) {}
    int getX() {return this->x;}
    int getY() {return this->y;}
};

#endif