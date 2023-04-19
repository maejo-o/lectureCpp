#include <iostream>
using namespace std;
const int MAX = 100;
// 1. ≈¨∑°Ω∫ Student ¡§¿«
class Student {
private:
    char name[MAX]; // ¿Ã∏ß(¿ŒΩ∫≈œΩ∫ ∏‚πˆ ∫Øºˆ)
    int sNo; // «–π¯(¿ŒΩ∫≈œΩ∫ ∏‚πˆ ∫Øºˆ)
public:
    // 3 constructors, 1 destructor, getter, setter º±æ
    Student();
    Student(const char* name_arg, int num); // pass by ptr∂Û ∫Ø∞Ê ∏¯«œ∞‘ const
    Student(const Student& sobj); // pass by reference∂Û ∫Ø∞Ê ∏¯«œ∞‘ const
    ~Student();
    char* getName();
    void setName(const char* name_arg);
    int getSNo();
    void setSNo(int num);
};
// 2. ∏‚πˆ «‘ºˆ ¡§¿«
Student::Student() {
    cout << "∏≈∞≥∫Øºˆ æ¯¥¬ ª˝º∫¿⁄" << endl;
    this->sNo = 0;
    name[0] = '\0';
}
Student::Student(const char* name_arg, int num) {
    cout << "∏≈∞≥∫Øºˆ ¿÷¥¬ ª˝º∫¿⁄" << endl;
    this->sNo = num;
    strcpy_s(this->name, MAX, name_arg);
}
Student::Student(const Student& sobj) { // s2∞° sobj∑Œ ¿¸¥ﬁ
    cout << "∫πªÁ ª˝º∫¿⁄" << endl;
    this->sNo = sobj.sNo;
    strcpy_s(this->name, MAX, sobj.name);
}
Student::~Student() {
    cout << "destructor" << endl;
}
char* Student::getName() {
    return this->name;
}
void Student::setName(const char* name_arg) {
    strcpy_s(this->name, MAX, name_arg);
}
int Student::getSNo() {
    return this->sNo;
}
void Student::setSNo(int num) {
    this->sNo = num;
}
// 3. æ÷«√∏Æƒ…¿Ãº« ∂«¥¬ ≈¨∂Û¿Ãæ∆Æ
void func(); // ∞¥√º∏¶ ª˝º∫
int main() {
    Student s1; // ∏≈∞≥∫Øºˆ æ¯¥¬ ª˝º∫¿⁄
    s1.setName("William");
    cout << "sizeof(Student): " << sizeof(Student) << endl;
    cout << "sizeof(s1): " << sizeof(s1) << endl;
    cout << "s1.getName(): " << s1.getName() << endl;
    Student s2("Jeffery", 123); // ∏≈∞≥∫Øºˆ ¿÷¥¬ ª˝º∫¿⁄
    cout << "before func() call" << endl; // ø©±‚±Ó¡ˆ ∞¥√º 2∞≥ ª˝º∫
    func();
    cout << "after func() call" << endl; // «ˆ¿Á ∞¥√º 3∞≥(William, Jeffery, Grace)
    Student s3(s2); // ∫πªÁ ª˝º∫¿⁄ // ø©±‚±Ó¡ˆ ∞¥√º 4∞≥ ª˝º∫(William, Jeffery, Jeffery, Grace)
    return 0;
}
void func() {
    Student std1("Alpha", 342);
    std1.setName("Alpha Go");
    cout << "std1.getName(): " << std1.getName() << endl;
    Student std2("James", 214); // ø©±‚±Ó¡ˆ ∞¥√º 4∞≥ ª˝º∫
    Student* sp = new Student("Grace", 584); // ø©±‚±Ó¡ˆ ∞¥√º 5∞≥ ª˝º∫
}
