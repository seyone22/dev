#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int amount, acc_bal = 10000;
    cout << "Please enter the amount to be withdrawn\nRs.";
    cin >> amount;
    if (acc_bal >= amount)
    {
        cout << "Processing... Please take cash from ATM\n";
        acc_bal = acc_bal - amount;
    }
    else
    {
        cout << "Sorry. Your account balance is insufficient for this transaction.\n";
    }
    system("pause");
    return 0;
}