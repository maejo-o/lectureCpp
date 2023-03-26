/*
#include <iostream>
using namespace std;
int main(void)
{
    int size;
    int* pArray;
    
    do
    {
        cout << "Input the size of array : ";
        cin >> size;
    }while(size<=0);
    
    pArray = new int[size];
    for(int i = 0; i < size; i++)
    {
        cout << i << "'s " << "element of array : ";
        cin >> *(pArray + i);
    }
    cout << "print the array : ";
    for(int i = 0; i < size; i++)
    {
        cout << *(pArray + i) << " ";
    }
    cout << endl;
    delete[] pArray;
    return 0;
}
*/
