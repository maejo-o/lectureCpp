/*
// 2차원 배열을 매개변수로 받고 유사적으로 리턴하는 함수를 사용하는 프로그램

# include <iostream>
using namespace std;

// reverse 함수는 매개변수로 2개의 배열을 받는다
// 첫번째 배열을 거꾸로 돌려서 두번째 배열로 리턴

void reverse(const int array1[], int array2[], int size)
{
    for(int i=0, j=size-1; i<size; i++, j--)
    {
        array2[j]=array1[i];
    }
    return;
}

// 입력받고 이를 활용해서 배열의 내용을 출력
// 이 함수는 배열 요소를 수정하지 않는다
void print(const int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(void)
{
    // 배열 2개 선언
    int array1[5] = {150, 170, 190, 110, 130};
    int array2[5];
    // reverse 함수 호출하여 array2 에 결과 받기
    reverse(array1, array2, 5);
    // 배열 출력
    print(array1, 5);
    print(array2, 5);
    return 0;
}

*/
