#include <iostream>
#include "point.h"
#include <string.h>

void Point::setLocation(double new_x, double new_y) {
    x = new_x;
    y = new_y;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setName(const char *new_name) {
    if (new_name == NULL) {
        if (name != NULL) {
            delete []name;
            name = NULL;
        }
    }
    else {
        name = new char[strlen(new_name)+1];
        strcpy(name, new_name);
    }

}

const char* Point::getName() {
    return name;    
}

Point::Point() {
}

Point::~Point() {
    if (name != NULL) {
        delete []name;
    }
}

Point::Point(char *nm, double X, double Y) {
    x = X;
    y = Y;
    if (nm != NULL) {
        name = new char[strlen(nm)+1];
    }
    
}