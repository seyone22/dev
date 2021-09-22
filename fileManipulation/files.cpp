#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream fs;
    string test;
    fs.open ("test.txt", ios::in);

    fs << "text to be written to file...";

    fs.close();

    system("pause");
    return 0;
}