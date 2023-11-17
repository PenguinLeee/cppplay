#include <iostream>
#include <stdlib.h>
int main() {
    std::cout << "before" << std::endl;
    free(NULL);
    std::cout << "after" << std::endl;
}
