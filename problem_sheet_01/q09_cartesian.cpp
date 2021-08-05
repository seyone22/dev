#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int p1[2], p2[2]; //inputs not sanitized, characters will crash it. What else... need to add an exit for the dowhile...
    do
    {
        cout << "This program will calculate the distance between two points on a cartesian plane.\n";
        cout << "Please enter the coordinates of the first point\n";
        cin >> p1[0] >> p1[1];
        cout << "Please enter the coordinates of the second point\n";
        cin >> p2[0] >> p2[1];
        cout << "The perpendicular distance between the two points is " << sqrt((pow((p1[0] - p2[0]),2) + pow((p1[1] - p2[1]),2))) << endl;
    } while (true);
}