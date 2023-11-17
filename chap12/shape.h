/*
 * @Description: As vividly shown in the code, 
 * @Version: 2.0
 * @Author: pen9u1nee
 * @Date: 2023-11-08 15:08:37
 * @LastEditors: pen9u1nee
 * @LastEditTime: 2023-11-08 16:10:14
 */
#ifndef __SHAPE_H
#define __SHAPE_H

#include <iostream>

class Shape {

private:
    char name[8];
    char color[8];

public:
    Shape(char* name="none", char* color="none");
    void setName(char* name);
    void setColor(char* color);
    void draw();
};



class Circle: public Shape {

private:
    static const int count = 3;
    double radius;

public:
    static const double PI;

    Circle(double radius, char* name="none", char* color="none", double pi=3.14159): Shape(name, color) {
        this->radius = radius;
    }

    double area() {
        this->draw();
        std::cout << "Calculating area of circle with pi " << this->count << std::endl;
        return count * radius * radius;
    }

};
const double Circle::PI = 3.14;
// const int Circle::count = 3;
#endif