
#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle = "
             << length * width << endl;
    }
};

int main()
{
    Shape *ptr;

    Circle c(7);
    Rectangle r(10, 5);

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}
