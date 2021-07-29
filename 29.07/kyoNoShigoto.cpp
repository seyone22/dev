#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string strTest="234234";
    int numInt;
    stringstream(strTest) >> numInt;
}