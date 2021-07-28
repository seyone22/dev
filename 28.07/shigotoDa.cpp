#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //operation precedence, from left to right
    /*
        1.()
        2.*,/,%
        3.+,-

    int x=5+6*2;
    int y=(5+6)*2;
    int set2=6+7*2-3;
    int set3=6+9/3-3;

    cout << x << endl << y << endl;
    cout << set2 << endl;
    cout << set3 << endl;*/

    int a=10,b=20;
    cout << a++ << endl << ++b << endl << a << endl << b; // so the difference is, a++ does the thing AFTER executing the cod.e ++b does it before executing the code, aka the print statement
    // so it even works on the same line, it increments after whatever it is is evaluated.
    //system("pause");
    return 0;
}