#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    float gpa;
    int age;

public:
    void getStudent()
    {
        cout << "entre the student name:" << name;
        cout << "\ngpa:" << gpa;
        cout << "\nroll no:" << roll_no;
    }
    void setStudent()
    {
        cout << "enter the student name, gpa, rollNo:" << endl;
        cin >> name >> gpa >> roll_no;
        cout << "\n";
    }
    Student()
    {
        cout << "is the default constructor" << endl;
    }
    Student(int a)
    {
        cout << "parameterised constructor" << endl;
        age = a;
        cout << "age is:" << a;
    }
    Student(Student &obj)
    {
        cout << "is default copy constructor";
    }
};
int main()
{
    Student s1;
    s1.setStudent();
    s1.getStudent();
    Student s2(20);
    Student s3(s1);
    s3.getStudent();
    return 0;
}