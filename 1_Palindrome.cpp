#include <iostream>
using namespace std;
int main()
{
int num,n,rev=0,rem;
cout<<"Enter a Number: ";
cin>>num;
n=num;
while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(rev==num)
cout<<"The Number is Palindrome";
else
cout<<"The Number is not Palindrome";
return 0;
}