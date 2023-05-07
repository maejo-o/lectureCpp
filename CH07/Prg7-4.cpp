/*
#include <iostream>
#include <cassert>
using namespace std;

class Rectangle
{
private:
    double length;
    double height;
public:
    Rectangle(double length, double height);
    Rectangle(const Rectangle& rect);
    ~Rectangle();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
Rectangle::Rectangle(double len, double hgt)
:length(len), height(hgt)
{
    if((length <= 0.0) || (height <= 0.0))
    {
        cout << "Rectangle 객체를 생성 할 수 없습니다." << endl;
        assert(false);
    }
}
Rectangle::Rectangle(const Rectangle& rect)
:length(rect.length), height(rect.height)
{ }

Rectangle::~Rectangle()
{ }
// accessor member function: print
void Rectangle::print() const
{
    cout << "length of Rectangle: " << length << endl;
    cout << "height of Rectangle: " << height << endl;
}

// accessor member function: getArea
double Rectangle::getArea() const
{
    return(length*height);
}
// accessor member function: getPerimeter
double Rectangle::getPerimeter() const
{
    return(2* (length+height));
}
int main()
{
    Rectangle rect1(3.0, 4.2);
    Rectangle rect2(5.1, 10.2);
    Rectangle rect3(rect2);
    
    cout << "Rectangle1 :";
    rect1.print();
    cout << "area: " << rect1.getArea() << endl;
    cout << "perimeter: " << rect1.getPerimeter() << endl << endl;
    
    cout << "Rectangle2 :";
    rect2.print();
    cout << "area: " << rect2.getArea() << endl;
    cout << "perimeter: " << rect2.getPerimeter() << endl << endl;
    
    cout << "Rectangle1 :";
    rect3.print();
    cout << "area: " << rect3.getArea() << endl;
    cout << "perimeter: " << rect3.getPerimeter() << endl << endl;
}
*/
