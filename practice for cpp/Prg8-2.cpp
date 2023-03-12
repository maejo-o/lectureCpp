// 어떤 파일을 읽고
// 배열을 사용해서 정수 목록을 읽어들이고
// 거꾸로 돌려서 다른 파일에 출력하느 ㄴ프로그램

# include <iostream>
# include <fstream>
using namespace std;

int main(void)
{
    // 선언
    const int CAPACITY = 50;
    int numbers[CAPACITY];
    int size = 0;
    ifstream inputFile;
    ofstream outputFile;
    
    // 입력파일 열기
    inputFile.open("inFile.dat");
    if(!inputFile)
    {
        cout<<"Can't open the file."<<endl;
        cout<<"Stop the program";
        return 0;
    }
    
    // 입력 파일에서 배열로 숫자를 읽어들이기
    while(inputFile >> numbers[size] && size <= 50)
    {
        size++;
    }
    // 입력파일 닫기
    inputFile.close();
    
    // 출력파일 열기
    outputFile.open("outFile.dat");
    if(!outputFile)
    {
        cout<<"Can't open the file."<<endl;
        cout<<"Stop the program";
        return 0;
    }
    
    // 배열의 내용을 거꾸로 출력 파일에 쓰기
    for (int i=size-1; i<=0; i--)
    {
        outputFile << numbers[i] << " ";
    }
    
    // 출력 파일 닫기
    outputFile.close();
    return 0;
}
