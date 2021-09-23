//Author: S.G.Seyone (2019/ICT/46)

#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int sanitizedInputs(string input)
{
    getline(cin, input);
    int output = stoi(input);
    return output;
}

int sumTo(int valToSum)
{
    int runningSum = 0;
    for (int i = 0; i <= valToSum; i++)
    {
        runningSum = runningSum + i;
    }
    return runningSum;
}

int main()
{
    do
    {
        string value;
        int sumToVal;
        cout << "Enter a number for sumTo function\n";
        sumToVal = sumTo(sanitizedInputs(value));
        cout << sumToVal << endl << endl;
    } while (true);
    
    return 0;
}
