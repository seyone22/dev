//Author: S.G.Seyone (2019/ICT/46)
//Testing memory locations and their values

#include <iostream>

using namespace std;

int main()
{
        int a = 10, b = 20, test;
        cout << &a << endl
             << &b << endl;
        test = abs(&a - &b);
        cout << "Difference is " << test << endl;
        cout << *(&a - test) << endl;
        cout << *(&a + test) << endl;
        cout << "Size of a is " << sizeof(a) << endl;

}