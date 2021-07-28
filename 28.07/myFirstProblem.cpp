#include <iostream>
using namespace std;

int main()
{
    double a, b, c, x;
    cout << "Please enter number a:";
    cin >> a;
    cout << "Please enter number b:";
    cin >> b;
    cout << "Please enter number b:";
    cin >> c;
    x = (((a + b) * (a + c)) / (b - c));
    cout << a << endl
         << b << endl
         << c << endl;
    cout << "x= " << x << endl;
    system("pause");
    return 0;
}