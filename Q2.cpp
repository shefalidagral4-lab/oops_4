#include <iostream>
using namespace std;
// 2. Create a C++ program to demonstrate Multilevel Inheritance.
class Person
{
public:
    string name;
};

class Employee : public Person
{
public:
    int empID;
};

class Manager : public Employee
{
public:
    string department;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Department: ";
        cin >> department;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nEmployee ID: " << empID;
        cout << "\nDepartment: " << department;
    }
};

int main()
{
    Manager m;
    m.input();
    m.display();
}