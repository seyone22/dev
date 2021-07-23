#include <iostream>
#include <string>
using namespace std;
int main()
{
    string fName, lName, regNo;
    int age;
    //string myName; //camelcase checked strictly apparantly. Careful
    cout << "Enter first name - \n";
    cin >> fName;
    cout << "Enter last name - \n";
    cin >> lName;
    cout << "age - \n";
    cin >> age;
    cout << "Enter registration number - \n";
    cin >> regNo;
    cout << "First name:\t\t" << fName << endl
         << "Last Name:\t\t" << lName << endl
         << "Age:\t\t\t" << age << endl
         << "Registration number: \t" << regNo << endl;
    cout << fName.append(" ").append(lName)+to_string(age) << endl;
    system("pause");
}