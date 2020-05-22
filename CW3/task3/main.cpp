#include <iostream>
#include <list>
#include <fstream>
#include "Square.cpp"
using namespace std;


int main() {
    Square square = Square(5);
    cout << square.area();

    return 0;
}