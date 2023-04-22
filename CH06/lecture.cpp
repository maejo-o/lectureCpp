# include <iostream>
using namespace std;

void func(int x, int& y);
void swapByValue(int i, int j);
void swapByReference(int& ri, int& ij);

int main(void)
{
    /* int a = 10;
    int b = -20;
    func(a,b);
    cout << "a : " << a << " " << "b : " << b << endl; */
    int a = 0;
    int b = 1;
    swapByValue(a, b);
    cout << "after swapByValue();" << endl;
    cout << "a : " << a << " " << "b : " << b << endl;
    
    swapByReference(a, b);
    cout << "after swapByReference();" << endl;
    cout << "a : " << a << " " << "b : " << b << endl;
    return 0;
}

void func(int x, int &y)
{
    x++;
    y++;
}
// pass by value 는 main 의 지역 변수를 변경하지 못했으나,
// pass by reference 는 main 의 지역변수를 변경할 수 있었음
// pass by reference 로 main 에 전달된 데이터는 메모리를 확보하지 않는다

void swapByValue(int i, int j)
{
    int tmp = j;
    j = i;
    i = tmp;
    cout << "in swapByValue" << endl;
    cout << "i : " << i << " " << "j : " << j << endl;
}

void swapByReference(int& ri, int& rj)
{
    int tmp = rj;
    rj = ri;
    ri = tmp;
    cout << "in swapByReference" << endl;
    cout << "ri : " << ri << " " << "rj : " << rj << endl;
}
