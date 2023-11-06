#include <iostream>
#include <string.h>

using namespace std;

class Rect {

private:
    const int UUID;
    int width;
    int len;
    char *name;

public:
    Rect(int l, int w, int id, char *namestr);
    Rect(const Rect &r);
    ~Rect();

    void setLen(int l);
    void setWidth(int w);
    int getArea();
    int getPerimeter();
    int getID();
};

void Rect::setLen(int l) {
    Rect::len = l;
}

void Rect::setWidth(int w) {
    Rect::len = w;
}

int Rect::getArea() {
    return len * width;
}

int Rect::getPerimeter() {
    return 2 * (len + width);
}

int Rect::getID() {
    return UUID;
}


// Init table
Rect::Rect(int l, int w, int id, char *namestr): len(l), width(w), UUID(id) {
    if (namestr != NULL) {
        name = (char *)malloc(strlen(namestr) + 1);
        strncpy(name, namestr, strlen(namestr));
    }
}

Rect::Rect(const Rect &r): UUID(r.UUID) {
    width = r.width;
    len = r.len;
    name = new char[strlen(r.name)+1];
    strcpy(name, r.name);

}

Rect::~Rect() {

    if (name != NULL) {
        cout << name << " ";
        free(name);
    }
    else {
        cout << "somebody ";
    }

    cout << "says bye~" << endl;
}


int main() {
    Rect r1 = Rect(1,2,114514, "alice");
    Rect r2 = Rect(1,2,1919810, "bob");
    Rect r3 = r1;
    
    cout << r1.getPerimeter() << endl;
    cout << r1.getID() << endl;

    cout << r2.getID() << endl;
    cout << r3.getID() << endl;
}