#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

class getInput
{
public:
    int output;
    string toString(string input)
    {
        getline(cin, input);
        return input;
    }
    int toInt(string input)
    {
        getline(cin, input);
        output = stoi(input);
        return output;
    }
    double toDouble(string input)
    {
        getline(cin, input);
        output = stod(input);
        return output;
    }
};

int main()
{
    getInput getInput1;
    string a;
    int b;
    b = getInput1.toInt(a);
    cout << b;
}