
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle(double radius);
    Circle();
    ~Circle();
    Circle(const Circle& circle);
    void setRadius(double value);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};

Circle::Circle(double rds)
:radius(rds)
{
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Circle::Circle()
:radius(0.0)
{
    cout << "기본생성자가 호출 되었습니다." << endl;
}
Circle::Circle(const Circle& circle)
:radius(circle.radius)
{
    cout << "복사 생성자가 호출 되었습니다." << endl;
}
Circle::~Circle()
{
    cout << "소멸자가 호출 되었습니다. " << radius << endl;
}
void Circle::setRadius(double value)
{
    value = radius;
}
double Circle::getRadius() const
{
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.14;
    return(PI*radius*radius);
}
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return(2*PI*radius);
}

int main(void)
{
    Circle circle1(5.2);
    cout << "radius: " << circle1.getRadius() << endl;
    cout << "area: " << circle1.getArea() << endl;
    cout << "perimeter: " << circle1.getPerimeter() << endl << endl;
    
    Circle circle2(circle1);
    cout << "radius: " << circle2.getRadius() << endl;
    cout << "area: " << circle2.getArea() << endl;
    cout << "perimeter: " << circle2.getPerimeter() << endl << endl;
    
    Circle circle3;
    cout << "radiius: " << circle3.getRadius() << endl;
    cout << "area: " << circle3.getArea() << endl;
    cout << "perimter: " << circle3.getPerimeter() << endl << endl;
    return 0;
}
