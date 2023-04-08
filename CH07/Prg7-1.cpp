/*
#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;
public:
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
};

double Circle::getRadius() const
{
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.14;
    return(PI * radius * radius);
}
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return(2*PI*radius);
}
void Circle::setRadius(double value)
{
    radius = value;
}
int main(void)
{
    cout << "Circle1: " << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "radius: " << circle1.getRadius() << endl;
    cout << "area: " << circle1.getArea() << endl;
    cout << "perimeter: " << circle1.getPerimeter() << endl << endl;
    
    cout << "Circle2: " << endl;
    Circle circle2;
    circle1.setRadius(20.0);
    cout << "radius: " << circle2.getRadius() << endl;
    cout << "area: " << circle2.getArea() << endl;
    cout << "perimeter: " << circle2.getPerimeter() << endl << endl;
}
*/
