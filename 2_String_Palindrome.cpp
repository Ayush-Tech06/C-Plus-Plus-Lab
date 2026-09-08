#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int len, flag = 0;
    cout << "Enter a string: ";
    cin >> str;
    len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}