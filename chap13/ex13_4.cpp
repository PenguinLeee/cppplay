#include <iostream>
#include <string.h>

using namespace std;

class A {

private:    
    char *name;

public:
    A(const char* nm = "unknown") {
        if (nm == NULL) {
            nm = "unknown";
        }
        
        this->name = (char* )malloc(strlen(nm)+1);
        strcpy(this->name, nm);
    }

    A(const A& a) {
        this->name = (char* )malloc(strlen(a.name)+1);
        strcpy(this->name, a.name);
    }

    ~A() {
        if (name != NULL) free(name);
    }

    void print() {
        cout << this->name << endl;
    }

    A& operator =(const A& a) {
        free(this->name);
        this->name = (char* )malloc(strlen(a.name)+1);
        strcpy(this->name, a.name);
        return *this;
    } 
};

int main() {
    A a("i am a");
    a.print();
    A b = a;
    b.print();
    A c;
    c.print();
    c = a; // error without operator reload
}