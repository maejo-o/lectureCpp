
#include <iostream>
using namespace std;

int first = 20;
static int second = 30;

int main()
{
    static int third = 50;
    cout << "global variable value : " << first << endl;
    cout << "global static variable value : " << second << endl;
    cout << "local static variable value : " << third << endl;
    
    return 0;
}
