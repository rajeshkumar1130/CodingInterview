#include <iostream>
#include<string>
using namespace std;

/// <summary>
/// program to check if all characters in a string are unique.
/// </summary>
/// <returns></returns>
int main()
{
    string str;
    cin >> str;
    int bitVector = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int val = str[i] - 'a';
        if ((bitVector & (1 << val)) > 0)
        {
            cout<< "Duplicate character found\n";
        }
        else
        {
            bitVector |= 1 << val;
        }
    }

    cout << "No duplicate character found\n";
}


