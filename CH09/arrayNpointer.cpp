#include <iostream>
using namespace std;
int main(void)
{
    int i = 5;
    int* ip = &i;
    double d = 5.7;
    char c[6] = {'M', 'i', 'n', 's', 'u', '\0'};
    char* cp = c;
    cout << "ip: " << ip << endl;
    cout << "ip + 1: " << ip+1 << endl;
    cout << "&ip: " << &ip << endl;
    cout << "&ip+1: " << &ip+1 << endl;
    cout << "cp: " << cp << endl;
    cout << "cp + 1: " << cp+1 << endl;
    cout << "&cp: " << &cp << endl;
    cout << "&cp + 1: " << &cp+1 << endl;
    
}
