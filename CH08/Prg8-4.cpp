/*
// 컴파일한 Circle 클래스를 활용해서
// Circle 객체의 배열을 만드는 프로그램

# include <iostream>
# include "Circle.h"
using namespace std;

int main()
{
    // 배열 선언
    Circle circles[3];
    // 객체 인스턴스화
    circles[0] = Circle(3.0);
    circles[1] = Circle(4.0);
    circles[2] = Circle(5.0);
    
    // 정보 출력
    for (int i = 0; i < 3; i++)
    {
        cout<<"circle["<<i<<"]'s information"<<endl;
        cout<<"radius : "<<circle[i].getRadius()<<" ";
        cout<<", area : "<<circle[i].getArea()<< " ";
        cout<<", perimeter : "<<circle[i].getPerimeter()<<" ";
        cout<<"endl";
    }
    return 0;
}
*/
