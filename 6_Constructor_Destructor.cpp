#include <iostream>
using namespace std;
class Shape
{
    float radius, length, width;

public:
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }
    void PeriCircle()
    {
        float peric;
        peric = 2 * 3.14159 * radius;
        cout << "Perimeter of Circle = " << peric << endl;
    }
    void PeriRectangle()
    {
        float perir;
        perir = 2 * (length + width);
        cout << "Perimeter of Rectangle = " << perir << endl;
    }
    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};
int main()
{
    Shape s(5, 10, 6);
    s.PeriCircle();
    s.PeriRectangle();
    return 0;
}