
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    string strg("Hello my friends");
    cout << "size: " << strg.size() << endl;
    cout << "Maximum size : " << strg.max_size() << endl;
    cout << "capacity : " << strg.capacity() << endl;
    cout << "empty string : " << boolalpha << strg.empty() << endl;
    cout << endl;
    
    strg.reserve(20);
    cout << "size: " << strg.size() << endl;
    cout << "Maximum size : " << strg.max_size() << endl;
    cout << "capacity : " << strg.capacity() << endl;
    cout << "empty string : " << boolalpha << strg.empty() << endl;
    cout << endl;
    
    return 0;
}
