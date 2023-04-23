
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string strg1;
    string strg2;
    cout << "Enter the Strg1: ";
    cin >> strg1;
    cout << "strg1 : " << strg1 << endl;
    
    cin.clear(); // input buffer clear
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter the line: ";
    getline(cin, strg1); // default 는 '\n'
    cout << "strg(line)1: " << strg1 << endl << endl;
    
    while(true)
    {
        cout << "Input the string as a line: ";
        getline(cin, strg2);
        if(strg2.empty() == true) // strg2 에 아무것도 입력 되지 않았을시
        {
            cout << "break" << endl;
            break;
        }
        cout << "string as a line(strg2): " << strg2 << endl;
    }
    return 0;
}
