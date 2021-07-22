#include <iostream>
using namespace std;
main()
{
    string firstString = "Test", secondString = "Test02";
    int int1 = 1, int2 = 2;
    int1 = int1 + int2;
    cout << int1 << endl;
    int1 = int1 - int2;
    firstString = firstString + secondString;
    cout << int1 << endl;
   // firstString = firstString - secondString; yeah you can't substract strings. Can add em though
    cout << firstString << endl
         << secondString;



         char myChar='S', nice='6';
    cout << myChar << endl << nice;
    return 0;
}