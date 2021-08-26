//Author: S.G.Seyone (2019/ICT/46)

//This program will read the name, regNo, and age from the student.
//If the age is invalid, the program will ask for a valid age
//Valid ages are between 0 and 100.c
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string fName, lName, regNo;
    int age;
    cout << "Please enter your personal details in the prompt below..\n";

    cout << "Please enter your name (eg. John Smith)\n";
    cin >> fName >> lName;
    do
    {
        if (age < 0)
        {
            cout << "Your age cannot be less than 0.\n";
        } else
        if (age > 100)
        {
            cout << "Are you sure you're over 100 years old?\n";
        }
        
        
        cout << "Please enter your age\n";
        cin >> age;
    } while (age < 0 || age > 100 );

    cout << "Please enter your registration number\n";
    cin >> regNo;

    cout << "Your details are as follows\n"
         << "Name :\t\t\t" << fName << " " << lName << endl
         << "Age :\t\t\t" << age << endl
         << "Registration Number :\t" << regNo << endl;

    system("pause");
    return 0;
}