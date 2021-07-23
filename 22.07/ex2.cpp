#include <iostream>
#include <string>
using namespace std;
int main()
{
    string fullName, course, address, regNo;
    int age;
    cout << "This is a form for inputting data. The data will be shown to you at the end.\n";
    cout << "Please enter your Full name\n";
    getline  (cin,fullName);
    cout << "Please enter your Age\n";
    cin >> age;
    cout << "Please enter your Course name\n";
    cin >> course;
    cout << "Please enter your address\n";
    cin >> address;
    cout << "Please enter your Registration number\n";
    cin >> regNo;
    cout << endl << fullName << endl << age << endl << course << endl << address << endl << regNo << endl;
    system("pause");
}
