#include <iostream>

using namespace std;

int main()
{
    double x = 54.89, y = 90.909;
    double dec=y/x;
    cout << "x=" << x << endl
         << "y=" << y << endl
         << "x+y=" << x + y << endl
         << "x-y=" << x - y << endl
         << "y-x=" << y - x << endl
         << "y*x=" << y * x << endl
         << "y/x=" << dec << endl; //you can't do operations between different data types
    system("pause");
    return 0;
}