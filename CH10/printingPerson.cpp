
#include <string>
#include <iostream>
using namespace std;
int main()
{
    // Declarations
    string first, last;
    char init;
    // Input first, last, and initial
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;
    cout << "Enter initial: ";
    cin >> init;
    
    // Printing the full name
    cout << endl;
    cout << "Full name in first format: ";
    cout << first + " " + init + ". " + last << endl << endl;
    return 0;
}
