/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    int low = 5;
    int high = 15;
    int tryLimit = 5;
    int guess;
    
    srand((unsigned int)time(NULL));
    int temp = rand();
    int num = temp % (high - low + 1) + low;
    
    int counter = 1;
    bool found = false;
    while(counter <= tryLimit && !found)
    {
        do
        {
            cout << "Input the integer 1~15 : ";
            cin >> guess;
        }while(guess < 5 || guess > 15);
        
        if(guess == num)
        {
            found = true;
        }
        else if(guess > num)
        {
            cout << "more low" << endl;
        }
        else
        {
            cout << "more high" << endl;
        }
        counter++;
    }
    if(found)
    {
        cout << "Congratulation!" << endl;
        cout << "Answer : " << num << endl;
    }
    else
    {
        cout << "NOOOOOOOO" << endl;
        cout << "Answer : " << num << endl;
    }
    return 0;
}
*/
