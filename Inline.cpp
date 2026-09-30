#include<iostream>
using namespace std;
class Person
{
    char name[64];
    char address[64];
    int age;
    float basic, hra, da, ta, gross;
    public:
    Person()
    {
        cout<<"Enter the Name:"<<endl;
        cin>>name;
        cout<<"Enter the Address:"<<endl;
        cin>>address;
        cout<<"Enter the Age:"<<endl;
        cin>>age;
        cout<<"Enter the Salary:"<<endl;
        cin>>basic;
    }
    void display()
    {
        hra= 0.20f*basic;
        da= 0.50f*basic;
        ta= 1500.0f;
        gross= basic+hra+da+ta;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"-----Salary Slip-----\n";
        cout<<"Salary:"<<basic<<endl;
        cout<<"HRA:"<<hra<<endl;
        cout<<"DA:"<<da<<endl;
        cout<<"TA:"<<ta<<endl;
        cout<<"Gross Salary:"<<gross<<endl;
    }
    inline static void young_eldest(Person p[], int n)
    {
        int young=0, eldest=0;
        for(int i=0;i<n;i++)
        {
            if(p[i].age<p[young].age)
            {
                young=i;
            }
        }
        cout<<"Youngest: "<< p[young].name<<"Age: "<<p[young].age<<endl;
        for(int i=0;i<n;i++)
        {
            if(p[i].age>p[eldest].age)
            {
                eldest=i;
            }
        }
        cout<<"Eldest: "<< p[eldest].name<<"Age: "<<p[eldest].age<<endl;
    }
};
int main()
{
    Person p[10];
    Person::young_eldest(p,10);
    for(int i=0;i<10;i++)
    {
        p[i].display();
    }
    return 0;
}
