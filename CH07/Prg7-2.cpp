/*
// 객체 지향 프로그램에서 클래스를 사용하는 예
#include <iostream>
using namespace std;
// 1. class definition
class Circle
{
private:
    double radius;
public:
    Circle();
    Circle(double radius);
    Circle(const Circle& cn);
    ~Circle();
    void setRadius(double value);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};
// 2. member function definition
// constructor without parameter, constructor with parameter, copy constructor, destructor, member function definition
Circle::Circle()
{
    cout << "constructor without parameter" << endl;
}
Circle::Circle(double rds)
:radius(rds)
{
    cout << "constructor with parameter" << endl;
}
Circle::Circle(const Circle& cn)
:radius(cn.radius)
{
    cout << "copy constructor" << endl;
}
Circle::~Circle()
{
    cout << "deconstructor" << endl;
}
void Circle::setRadius(double value)
{
    radius = value;
}
double Circle::getRadius() const
{
    return radius;
}
double Circle::getArea() const
{
    const int PI = 3.14;
    return PI*radius*radius;
}
double Circle::getPerimeter() const
{
    const int PI = 3.14;
    return PI*2*radius;
}
// 3. application
int main()
{
    Circle circle1(5.2);
    cout << "<circle1>" << endl;
    cout << "radius: " << circle1.getRadius() << endl;
    cout << "area: " << circle1.getArea() << endl;
    cout << "perimeter: " << circle1.getPerimeter() << endl << endl;
    Circle circle2(circle1);
    cout << "<circle2>" << endl;
    cout << "radius: " << circle2.getRadius() << endl;
    cout << "area: " << circle2.getArea() << endl;
    cout << "perimeterL " << circle2.getPerimeter() << endl << endl;
    
    
    Circle circle3;
    cout << "<circle3>" << endl;
    cout << "radius: " << circle3.getRadius() << endl;
    cout << "area: " << circle3.getArea() << endl;
    cout << "perimeter: " << circle3.getPerimeter() << endl << endl;
    
    return 0;
}
*/
