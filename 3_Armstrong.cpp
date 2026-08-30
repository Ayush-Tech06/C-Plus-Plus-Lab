#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,n,c=0,rem;
    float sum=0;
    cout<<"Enter a Number: ";
    cin>>num;
    n=num;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    n=num;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,c);
        n=n/10;
    }
    if(sum==num)
    cout<<"It is a Armstrong Number";
    else
    cout<<"It is not a Armstrong Number";
    return 0;
}
