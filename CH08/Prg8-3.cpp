/*
// 어떤 달의 날짜 수를 배열을 사용해서 출력하는 프로그램

# include <iostream>
using namespace std;

int main()
{
    // 선언
    int numberOfDays[13] = {0, 31, 28, 31, 30,31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    
    // 입력 받고 유효성 검사
    do
    {
        cout<<"Enter the month (1~12) : ";
        cin>>month;
    }while(month <1 || month >12);
    
    // 출력
    cout<<month<<" Month has, "<<numberOfDays[month];
    cout<<" days"<<endl;
    return 0;
}
*/
