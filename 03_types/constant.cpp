#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main ()
{
    double r=5.0;               // radius
    double circle;
    bool foo = true;
    bool bar = false;
    int* p = nullptr;

    circle = 2 * pi * r;
    cout << r << newline;
    cout << circle << newline;
    cout << foo << newline;
    cout << bar << newline;
    cout << p << newline;
    return 0;
}