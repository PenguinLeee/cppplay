#ifndef POINT_H
#define POINT_H

class Point {

private:

    char* name;
    double x;
    double y;

public:
    Point();
    Point(char* nm, double X, double Y);
    ~Point();

    void setLocation(double new_x, double new_y);
    double getX();
    double getY();

    const char* getName();
    void setName(const char *new_name);

};

#endif