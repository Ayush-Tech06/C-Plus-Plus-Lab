#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    void getData()
    {
        cout<<"Enter the first Number: ";
        cin>>x;
    }
    friend void swap(A,B);
};
class B
{
    int y;
    public:
    void getData()
    {
        cout<<"Enter the Seond Number: ";
        cin>>y;
    }
    friend void swap(A,B);
};
void swap(A a,B b)
{
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;
    cout<<"After Swapping:"<<endl;
    cout<<"First Number: "<< a.x <<endl;
    cout<<"Second Number: "<< b.y <<endl;
}
int main()
{
    A a;
    B b;
    a.getData();
    b.getData();
    swap(a,b);
    return 0;
}
