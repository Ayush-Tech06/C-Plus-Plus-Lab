#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    bool palindrome = true;
    cout << "Enter a string: ";
    cin >> str;
    int length = str.length();
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}
