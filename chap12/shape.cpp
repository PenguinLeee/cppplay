/*
 * @Description: As vividly shown in the code, 
 * @Version: 2.0
 * @Author: pen9u1nee
 * @Date: 2023-11-08 15:11:38
 * @LastEditors: pen9u1nee
 * @LastEditTime: 2023-11-08 15:52:06
 */
#include <iostream>
#include "shape.h"
#include <string.h>

using namespace std;

Shape::Shape(char* name, char* color) {
    strcpy(this->name, name);
    strcpy(this->color, color);
}

void Shape::setName(char* name) {
    strcpy(this->name, name);
}

void Shape::setColor(char* color) {
    strcpy(this->color, color);
}

void Shape::draw() {
    cout << name << " " << color << endl;
}

int main() {
    Circle c(5);
    cout << c.area() << endl;
}