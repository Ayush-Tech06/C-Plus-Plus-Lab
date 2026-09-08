#include <iostream>
using namespace std;
// Call by Value
void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Call by Reference
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter Two Numbers: ";
    cin >> a;
    cin >> b;
    cout << "Before Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    // Call by Value
    Swap(a, b);
    cout << "After Swapping (Call by Value):" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    // Call by Reference
    swap(a, b);
    cout << "After Swapping (Call by Reference):" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}