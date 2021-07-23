#include <iostream>
#include <string>
using namespace std;
int main()
{

    cout << "This program will tell you if the number you entered is a prime or not.\nTo start, please enter any number.\n";
    do
    {
        float input = 0;
        //float increment = 2;

        cin >> input;
        float increment = input - 1;

        do
        {
            float quotient = 0;
            quotient = input / increment;
            cout << quotient << endl;
            int n = quotient;
            cout << "'" << n << "'";
            increment--;
            if (quotient == n)
            {
                cout << "Number is not a prime.";
            };
        } while (increment > 0);
    } while (true);
    system("pause");
    return 0;
}