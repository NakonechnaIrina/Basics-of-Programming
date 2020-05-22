#include<iostream>
#include<string>
using namespace std;

struct Square
{
    double a;

    Square(double a_)
    {
        a = a_;
    }

    double area()
    {
        return a * a;
    }
};

