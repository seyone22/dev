//Author: S.G.Seyone (2019/ICT/46)

//This program split two terms in a string

#include <iostream>

using namespace std;

int main()
{
    string fullName = "Seyone Gunasingham";

    //try to get length of array using magic
    int stringLength = fullName.size(); //This doesn't have the extra phantom value added at the back. safe!
    int firstLength = 0; //secondLength not necesesary for two terms

    for (int i = 0; i < stringLength; i++)
    {
        cout << fullName.at(i);
        cout << i << endl;
    }
    cout << endl;
    


    //gets the lengths of first and second name parts to memory
    for (int i = 0; i < stringLength; i++)
    {
        if (fullName.at(i)==' ')
        {
            break;
        }
        else
        {
            firstLength +=1;
        }
    }

    cout << "First Name: ";
    for (int i = 0; i < firstLength; i++)
    {
        cout << fullName.at(i);
    }
    cout << endl;

    cout << "Second Name: ";
    for (int i = firstLength + 1; i < stringLength; i++)
    {
        cout << fullName.at(i);
    }

    return 0;
}