#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int num, n, rev = 0, rem;
    int i, len, flag = 0;
    //Number Palindrome
    cout << "Enter a Number: ";
    cin >> num;
    n = num;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == num)
        cout << num << " is a Palindrome" << endl;
    else
        cout << num << " is not a Palindrome" << endl;
    //String Palindrome
    cout << "Enter a String: ";
    cin >> str;
    len = str.length();
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "String is a palindrome." << endl;
    else
        cout << "String is not a palindrome." << endl;

    return 0;
}