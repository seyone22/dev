#include <iostream>
#include <sstream>

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
    do
    {
        if (attempts == 3)
        {
            return 0;
        }
        
        string username = getinput("Please enter your username");
        string pwd = getinput("Please enter your password");
        string pwdCon = getinput("Please reenter your password");
        if (pwd == pwdCon)
        {
            if (pwd == "0666")
            {
                cout << "Access granted. Good day, " << username << "!";
                break;
            }
            else
            {
                cout << "The password is incorrect. Please try again.";
                attempts+=1;
            }
        }
        else
        {
            cout << "The passwords do not match. Please try again.";
            attempts+=1;
        }
    } while (true);

    cout << "successful break";
    system("pause");
    return 0;
}