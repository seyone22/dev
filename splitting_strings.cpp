//Author: S.G.Seyone (2019/ICT/46)

//This program split two terms in a string

#include <iostream>

using namespace std;

int main()
{
    char fullName[] = "Seyone Gunasingham";

    //try to get length of array using magic
    int arrayLength = sizeof(fullName) - 1; //it gives 19 where 18 is length of string... weird. Just reduce one for calculation's sake.
    int firstLength = 0; //secondLength not necesesary for two terms
    char temp;

    //gets the lengths of first and second name parts to memory
    for (int i = 0; i < arrayLength; i++)
    {
        if (fullName[i]==' ')
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
        cout << fullName[i];
    }
    cout << endl;

    cout << "Second Name: ";
    for (int i = firstLength + 1; i < arrayLength; i++)
    {
        cout << fullName[i];
    }
    
    
    return 0;
}