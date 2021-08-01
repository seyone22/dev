#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string strTest="234234";
    int numInt, c;
    stringstream(strTest) >> numInt;
    c = numInt++; // what happens is, c gets the original numInt value, then numInt is incremented. Careful here!
    // we have ==, !=, >=, <=, <, >
}