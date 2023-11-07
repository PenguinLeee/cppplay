#include <iostream>
#include <cmath>

using namespace std;

class Show;
class Point;

class Show {

public:
    void showInfo(Point &p);
    void printDistance(Point &p1, Point &p2);

};

class Point {    

public:
    Point(int xx=0, int yy=0);
    ~Point();
    int getX();
    int getY();
    friend class Show;
    static int count;
private:
    
    static constexpr double PI = 3.1415926; 
    int x;
    int y;

};

Point::Point(int xx, int yy): x(xx), y(yy) {
    count++;
}

Point::~Point() {
    count--;
}

int Point::getX() {
    return this->x;
}

int Point::getY() {
    return this->y;
}

void Show::showInfo(Point &p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

void Show::printDistance(Point &p1, Point &p2) {
    double d = sqrt( (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y) );
    cout << "THe distance is: " << d << endl;
}

int Point::count = 0;

int main() {
    
    Point p1(0,0), p2(3,4);
    Point *p3 = new Point(5, 6);
    cout << p1.count << " " << p2.count << endl;
    cout << p1.count << " " << p2.count << endl;

    Show s;
    s.showInfo(p1);
    s.showInfo(p2);

    s.printDistance(p1, p2);
}