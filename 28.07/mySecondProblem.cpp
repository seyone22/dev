#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2, Dst;
    cout << "This program will calculate the distance between two points on a cartesian plane." << endl;
    cout << "Please enter the coordinates of the first point x,y , seperated by a space" << endl;
    cin >> x1 >> y1;
    cout << "Please enter the coordinates of the second point x,y , seperated by a space" << endl;
    cin >> x2 >> y2;
    Dst = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));
    cout << x1 << endl << y1 << endl << x2 << endl << y2 << endl;
    cout << Dst << endl;
    system("pause");
    return 0;
}