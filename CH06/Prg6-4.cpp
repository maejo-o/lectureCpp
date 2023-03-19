
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    const double PI = 3.141592653589793238462;
    int n;
    double s, peri, area;
    
    do
    {
        cout << "Input the number of side(4 or more, integer) : ";
        cin >> n;
    }while(n<4);
    
    do
    {
        cout << "Input the length of side : ";
        cin >> s;
    }while(s <= 0.0);
    
    peri = n*s;
    area = (n*(pow(s,2)) / (n*(tan(PI/n))));
    // result
    cout << "peri = " << peri << endl;
    cout << "area = " << area << endl;
    
    return 0;
}
