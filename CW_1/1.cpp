#include <iostream>
#include "math.h"
using namespace std;

int abs1(int a) {
    int abs_1 = a * a;
    int abs_final = sqrt(abs_1);
    return abs_final;
}

int main()
{
    int a;
    cin >> a;
    cout << abs1(a);


    return 0;
}
int abs1(int a) {
    int abs_1 = a * a;
    int abs_final = sqrt(abs_1);
    return abs_final;
}



