// Cstyle String -> C++style string object
// vice versa

#include <cstring>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    char cs1[] = "Are you a string too?";
    string cpps;
    // c style stirng -> cpp style String object
    cpps = cs1; // 문자여로가 여러 함수들도 존재하는 객체가 형성됨
    cpps[0] = 'B';
    cout << "cpps: " << cpps << endl;
    
    // cpp style String object -> c style string
    string cpps2 = "Yes, I am!";
    const char* cs2 = NULL;
    cs2 = cpps2.c_str(); // 문자열의 시작주소를 반환한다. 오직 읽기 용도로만 사용 할 수 있음
    
    int len = cpps2.size(); // 10
    char* cs3 = new char[len+1]; // 복사를 할 char 배열 준비
    strncpy(cs3, cpps2.c_str(), sizeof(cs3)); // 복사, cs3는 독립적인 c style 의 문자열이 된다
    cout << cs3 << endl;
    cs3[0] = 'Z'; // modification is possible
    cout << cs3 << endl;
    delete[] cs3;
    cs3 = NULL;
    return 0;
}

