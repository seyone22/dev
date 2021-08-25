//This program will read the name, regNo, and age from the student.
//If the age is invalid, the program will ask for a valid age
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string fName, lName, regNo;
    int age;
    cout << "Please enter your personal details in the prompt below..\n";

    cout << "Please enter your name (eg. John Smith)";
    cin >> fName >> lName;
    do
    {
        if (age < 0)
        {
            cout << "Your age cannot be less than 0.";
        } else
        if (age > 100)
        {
            cout << "Are you sure you're over 100 years old?";
        }
        
        
        cout << "Please enter your age";
        cin >> age;
    } while (age < 0 || age > 100 );

    cout << "Please enter your registration number/n";
    cin >> regNo;

    cout << "Your details are as follows\n"
         << "Name :\t" << fName << " " << lName
         << "Age :\t" << age
         << "Registration Number :\t" << regNo;

    system("pause");
    return 0;
}