#include <iostream>
using namespace std;
int funcmin(int* ip, int size);

int main(void)
{
    int A[5] = {0, -9, 33, -45, -19};
    int res = funcmin(A, 5);
    cout << "The min value: " << res << endl;
}
int funcmin(int* ip, int size)
{
    int min = 0;
    for(int i=0; i<size; i++)
    {
        if(*(ip+i) <= min){
            min = *(ip+i);
        }
    }
    return min;
}
