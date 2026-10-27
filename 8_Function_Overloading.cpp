#include <iostream>
#include <cmath>
using namespace std;
class Area
{
public:
    void area(float r)
    {
        float area = 3.14159 * r * r;
        cout << "Area of Circle = " << area << endl;
    }
    void area(float l, float b)
    {
        float area = l * b;
        cout << "Area of Rectangle = " << area << endl;
    }
    void area(float a, float b, float c)
    {
        float s = (a + b + c) / 2;
        float result = s * (s - a) * (s - b) * (s - c);
        cout << "Area of Triangle = " << sqrt(result) << endl;
    }
};
int main()
{
    Area obj;
    obj.area(5.0f);
    obj.area(4.0f, 6.0f);
    obj.area(3.0f, 4.0f, 5.0f);
    return 0;
}