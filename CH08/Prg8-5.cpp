/*
// 파일에서 정수를 배열로 읽어들인 뒤
// 숫자의 합계, 평균, 최소값, 최대값을
// 출력하는 프로그램

# include <iostream>
# include <fstream>
using namespace std;

int main(void)
{
    // 파일 선언
    ifstream inputFile;
    // 배열과 변수 선언
    const int CAPACITY = 50;
    int numbers[CAPACITY];
    int size = 0;
    // 초기화
    int sum = 0;
    double average;
    int smallest = 1000000;
    int largest = -1000000;
    // 유효성 검사하면서 파일 열기
    inputFile.open("numFile.dat");
    if(!inputFile)
    {
        cout<<"입력 파일을 여는 동안 문제가 발생하였습니다."<<endl;
        cout<<"Stop the program";
        return 0;
    }
    while(inputFile>>numbers[size])
    {
        size++;
    }
    // 입력 파일 닫기
    inputFile.close();
    // 합계, 평균, 최소값, 최대값 찾기
    for(int i=0; i<size; i++)
    {
        sum += numbers[i];
        if(numbers[i]<smallest)
        {
            smallest = numbers[i];
        }
        if(numbers[i]>largest)
        {
            largest = numbers[i];
        }
        average = static_cast<double>(sum)/size;
        // 결과 출력
        cout<<"목록에 숫자가 "<<size;
        cout<<" 개 있습니다."<<endl;
        cout<<"sum : "<<sum<<endl;
        cout<<"average : "<<average<<endl;
        cout<<"smallest : "<<smallest<<endl;
        cout<<"largest : "<<largest<<endl;
        
        return 0;
    }
}
*/
