// Abstract class for Shape Hierarchy
#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Circle : public Shape
{
    private: 
        float radius;
    public:
        Circle(float r) : radius(r){}
        float area() override { return 3.14 * radius * radius; }
        float perimeter() override { return 2 * 3.14 * radius; }
};

class Rectangle : public Shape
{
    private:
        float length, width;
    public:
        Rectangle(float l, float w) : length(l), width(w){}
        float area() override { return length * width; }
        float perimeter() override { return 2 * (length + width); }
};

int main()
{
    Shape* c = new Circle(10.00);
    cout << "Area of Circle: " << c->area() << endl;
    cout << "Perimeter of Circle: " << c->perimeter() << endl;

    Shape* r = new Rectangle(5.00, 2.00);
    cout << "Area of Rectangle: " << r->area() << endl;
    cout << "Perimeter of Rectangle: " << r->perimeter() << endl;

    return 0;
}