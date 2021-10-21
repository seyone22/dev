#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string getinput(string description = "No description provided")
{
    string input;
    cout << description << "\n>>";
    getline(cin, input);
    return input;
}

int main()
{
    int attempts = 0;
    while (true)
    {
        if (attempts == 3)
        {
            return 0;
        }

        string username = getinput("Please enter your username");
        string pwd = getinput("Please enter your password");
        string pwdCon = getinput("Please reenter your password");
        int pwdInt = stoi(pwd);
        if (pwd == pwdCon)
        {
            if ((pwdInt >= 1000 && pwdInt <= 9999) || pwdInt == 0000) //checks all numerical values from 0000 to 1000
            {
                cout << "Access granted. Good day, " << username << "!" << endl;
                break;
            }
            else
            {
                cout << "The password is incorrect. Please try again.\n";
                attempts += 1;
                cout << "Remaining attempts: " << attempts << endl;
            }
        }
        else
        {
            cout << "The passwords do not match. Please try again.\n";
            attempts += 1;
            cout << "Remaining attempts: " << attempts << endl;
        }
    };

    cout << "successful break\n";
    system("pause");
    return 0;
}