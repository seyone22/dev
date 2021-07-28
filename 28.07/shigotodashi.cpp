#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = pow(3, 2); //three to the power of two
    cout << "a = " << a << endl;

    int maximum = max(45, 67);
    cout << "maximum = " << maximum << endl;

    int minimum = min(56, 69);
    cout << "minimum = " << minimum << endl;

    cout << "sqrt of a = " << sqrt(9) << endl;
    cout << "round value of 5.8 = " << round(5.8) << endl;
    cout << "round value of 5.3 = " << round(5.3) << endl;

    system("pause");
    return 0;
}