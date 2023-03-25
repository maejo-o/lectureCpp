
#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 11, 12, 13, 14};
    cout << "using for index to access array's element" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    cout << "using for pointer to access array's element" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << *(numbers + i) << " ";
    }
    cout << endl;
    return 0;
}
