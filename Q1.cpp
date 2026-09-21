#include <iostream>
using namespace std;
// 1. Create a C++ program to demonstrate Single Inheritance.
class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    int roll;
    string course;

    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Course: ";
        cin >> course;
    }

    void display()
    {
        cout << "\n--- Student Details ---";
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll No: " << roll;
        cout << "\nCourse: " << course;
    }
};

int main()
{
    Student s;
    s.getPerson();
    s.getStudent();
    s.display();
}